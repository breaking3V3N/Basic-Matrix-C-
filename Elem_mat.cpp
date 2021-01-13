#include "Elem_mat.h"

#include "C:\Users\Will\source\repos\Project5\Elem_mat.h"



elem_mat::elem_mat(e_type t)
{
	switch (t)
	{
	case e_type::t_1:
		e_i = elem_mat::rref_t1(1);
		break;
	case e_type::t_2:
		break;
	case e_type::t_3:
		break;
	default:
		break;
	}
}


Matrix elem_mat::rref_t1(double scalar_c)
{
	Matrix e_1 = c_identity(scalar_c);
	return e_1;
}

Matrix elem_mat::rref_t2(std::pair<unsigned, unsigned > row_switched)
{
	type = e_type::t_2;


	std::vector<double> srow_1;
	std::vector<double> srow_2;

	Matrix e_2 = gen_identity();
	srow_1 = get_row(row_switched.first);
	srow_2 = get_row(row_switched.second);

	e_2.set_row(srow_1, row_switched.second);
	e_2.set_row(srow_2, row_switched.first);
	return e_2;
}


Matrix elem_mat::rref_t3(double c_num, std::pair<unsigned, unsigned > row_switched)
{
	//two part sort of function. 
	//(1) focus on getting the row added

	//gets rows needed for operation 
	std::vector<double> constant_row = get_row(row_switched.second);
	std::vector<double> manipulated_row = get_row(row_switched.first);

	constant_row = v_scale(constant_row, c_num);

	manipulated_row = v_add(manipulated_row, constant_row);

	Matrix e_3 = gen_identity();
	e_3.set_row(manipulated_row, row_switched.first);

	return e_3;

}