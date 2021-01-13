#pragma once
#include "C:\Users\Will\source\repos\Project3\Matrix.h"
#include "vec.h"


enum class e_type
{
	t_1, t_2, t_3
};

struct elem_mat: public Matrix
{
private:
	e_type type;
	Matrix e_i = Matrix::gen_identity();
public:


	Matrix rref_t1(double scalar_c);
	// scaling row(EASY METHOD)
	/*
	Matrix rref_t1(double c_num, unsigned num_col, std::vector<unsigned> row_nums)
	{
		Matrix e_i = Matrix::c_identity(c_num, num_col);
		for (unsigned i = 0; i < row_nums.size(); i++)
		{

			double reciprocal;
			reciprocal = 1 / c_num;
			//mult whole row
			for (unsigned recip_it = 0; recip_it < cols; recip_it++)
			{
				e_i.set_element(recip_it, row_nums[i], 1 *)
					mat[recip_it][row_nums] *= reciprocal;
			}
			reciprocal = 0;

		}
		return e_i;

	}
	*/
	Matrix rref_t2(std::pair<unsigned, unsigned > row_switched);
	
	
	Matrix rref_t3(double c_num, std::pair<unsigned, unsigned > row_switched);
		//for efficiency, we define rref_t3 as follows:
		//row_switched<manipulated, constant>
		
	elem_mat(e_type t);


			//to add first
	
};