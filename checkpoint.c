#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
	#ifndef   NCSPIC_SEQ_FIELD    
		#include <mpi.h>

#define PS_MPI_CHAR MPI_CHAR

#define PS_MPI_INT MPI_INT

#define PS_MPI_DOUBLE MPI_DOUBLE

#define PS_MPI_FLOAT MPI_FLOAT

#define PS_MPI_LONG MPI_LONG

#define PS_MPI_LONG_LONG MPI_LONG_LONG

#define PS_MPI_COMM_WORLD MPI_COMM_WORLD

typedef MPI_Comm PS_MPI_Comm;

typedef MPI_Datatype PS_MPI_Datatype;

typedef MPI_Request PS_MPI_Request;

typedef MPI_Status PS_MPI_Status;
#include "libsmallmpi.h"

#define NCSPIC_SEQ_FIELD
typedef double NUMBER_REAL;
typedef enum {CD_C,CD_OpenMP,CD_OpenCL,CD_CUDA} SEQ_FIELD_TYPES;

#define NUM_SYNC_LAYER 27

#define NUM_SYNC_KERNEL 4

#define NUM_FDTD_KERNEL 22
typedef struct { 	void *  pe ;
	long  xlen ;
	long  ylen ;
	long  zlen ;
	long  xblock ;
	long  yblock ;
	long  zblock ;
	long  numvec ;
	long  x_num_thread_block ;
	long  y_num_thread_block ;
	long  z_num_thread_block ;
	int  ovlp ;
	int  num_ele ;
	int  CD_type ;
	void *   sync_layer_pscmc  [NUM_SYNC_LAYER];	void *   swap_layer_pscmc  [NUM_SYNC_LAYER];	void *   sync_kernels  [NUM_SYNC_KERNEL];	void *   fdtd_kernels  [NUM_FDTD_KERNEL];	void *   dm_kernels  [3];	void *   dmbihamt_kernels  [7];	void *   geo_yeefdtd_kernels  [2];	void *   geo_yeefdtd_rect_kernels  [1];	void *   hydroA_kernels  [8];	void *   yee_abc_kernels  [8];	void *   yee_pec_kernels  [8];	void *   yee_damp_kernels  [8];	void *   yee_setfix_kernels  [8];	void *  rdcd ;
	double *  rdcd_host ;
	void *  cur_rankx_pscmc ;
	void *  cur_ranky_pscmc ;
	void *  cur_rankz_pscmc ;
	void *  xoffset ;
	void *  yoffset ;
	void *  zoffset ;
	long *  global_x_offset ;
	long *  global_y_offset ;
	long *  global_z_offset ;
	long *  global_id ;
	long  global_pid ;
	long *  adj_ids ;
	long *  adj_processes ;
	long *  adj_local_tid ;
	void *  main_data ;
	double  delta_x ;
	double  delta_y ;
	double  delta_z ;
	void *  blas_yiszero_synced_kernel ;
	void *  blas_mulxy_numele3_kernel ;
	void *  blas_yiszero_kernel ;
	void *  blas_yisconst_kernel ;
	void *  blas_get_ITG_Potential_kernel ;
	void *  blas_invy_kernel ;
	void *  blas_axpby_kernel ;
	void *  blas_axpy_kernel ;
	void *  blas_yisax_kernel ;
	void *  blas_mulxy_kernel ;
	void *  blas_findmax_kernel ;
	void *  blas_dot_kernel ;
	void *  blas_sum_kernel ;
} Field3D_Seq;typedef struct { 	Field3D_Seq *  pfield ;
	Field3D_Seq *  pfieldE ;
	Field3D_Seq *  pfieldB ;
	Field3D_Seq *  pfieldB1 ;
	Field3D_Seq *  pFoutJ ;
	Field3D_Seq *  pLFoutJ ;
	Field3D_Seq *  pFoutEN ;
	void *   sort_kernel  [6];	void *   geo_rel_1st_kernel  [9];	void *   implicit_kernel  [2];	void *   rel_1st_kernel  [2];	void *   krook_collision_test_kernel  [2];	void *   nonrel_test_kernel  [18];	void *   boris_yee_kernel  [1];	void *  cu_swap_l_kernel ;
	void *  cu_swap_r_kernel ;
	void *  move_back_kernel_kernel ;
	double  Mass ;
	double  Charge ;
	double  Number_particle_per_marker ;
	long  grid_cache_len ;
	long  cu_cache_length ;
	void *  split_pass_x_kernel ;
	void *  split_pass_y_kernel ;
	void *  split_pass_z_kernel ;
	void *  split_pass_x_nopush_kernel ;
	void *  split_pass_y_nopush_kernel ;
	void *  split_pass_z_nopush_kernel ;
	void *  split_pass_x_small_grids_kernel ;
	void *  split_pass_y_small_grids_kernel ;
	void *  split_pass_z_small_grids_kernel ;
	void *  split_pass_x_sg2_small_grids_kernel ;
	void *  split_pass_y_sg2_small_grids_kernel ;
	void *  split_pass_z_sg2_small_grids_kernel ;
	void *  split_pass_E_particle_kernel ;
	void *  split_pass_x_vlo_kernel ;
	void *  split_pass_y_vlo_kernel ;
	void *  split_pass_z_vlo_kernel ;
	void *  split_pass_x_vlo_nopush_kernel ;
	void *  split_pass_y_vlo_nopush_kernel ;
	void *  split_pass_z_vlo_nopush_kernel ;
	void *  split_pass_x_vlo_small_grids_kernel ;
	void *  split_pass_y_vlo_small_grids_kernel ;
	void *  split_pass_z_vlo_small_grids_kernel ;
	void *  split_pass_x_vlo_sg2_small_grids_kernel ;
	void *  split_pass_y_vlo_sg2_small_grids_kernel ;
	void *  split_pass_z_vlo_sg2_small_grids_kernel ;
	void *  split_pass_x_vlo_sg2_nopush_small_grids_kernel ;
	void *  split_pass_y_vlo_sg2_nopush_small_grids_kernel ;
	void *  split_pass_z_vlo_sg2_nopush_small_grids_kernel ;
	void *  split_pass_E_particle_vlo_kernel ;
	void *  dump_ene_num_kernel ;
	void *  calculate_rho_kernel ;
	void *  inoutput ;
	void *  xyzw ;
	void *  cu_cache ;
	void *  cu_xyzw ;
	void *  adjoint_vec_pids ;
} One_Particle_Collection;typedef struct { 	Field3D_Seq *  car ;
	void *  cdr ;
} Field3D_Seq_PAIR;typedef struct { 	Field3D_Seq *  data ;
	long  num_runtime ;
	PS_MPI_Comm  comm ;
	long  cur_rank ;
	long  num_mpi_process ;
	long   sync_layer_len  [NUM_SYNC_LAYER];	PS_MPI_Request * *  rqst ;
	One_Particle_Collection *  particles ;
	int  num_spec ;
	double  damp_vars ;
} Field3D_MPI;typedef struct { 	Field3D_MPI  MPI_fieldE ;
	Field3D_MPI  MPI_fieldB ;
	Field3D_MPI  MPI_fieldB1 ;
	Field3D_MPI  MPI_FoutJ ;
	Field3D_MPI  MPI_LFoutJ ;
	Field3D_MPI  MPI_fieldEtmp ;
	Field3D_MPI  MPI_fieldEtmp1 ;
	Field3D_MPI  MPI_fieldEtmp2 ;
	Field3D_MPI  MPI_fieldBtmp1 ;
	Field3D_MPI  MPI_fieldPMLB ;
	Field3D_MPI  MPI_fieldPMLE ;
	Field3D_MPI *  pMPI_FoutJ ;
	Field3D_MPI *  pMPI_FoutEN ;
	Field3D_MPI  MPI_fieldE_ext ;
	Field3D_MPI  MPI_fieldB_ext ;
	Field3D_MPI  MPI_fieldE_filter ;
	Field3D_MPI  MPI_fieldB_filter ;
	Field3D_MPI *  pB0 ;
	Field3D_MPI *  pB1 ;
	int  use_pml_abc_dir ;
	int  use_pml_level ;
	int  use_small_grid ;
	long  allxmax ;
	long  allymax ;
	long  allzmax ;
	double  use_pml_sigma_max ;
	double  dt ;
	int  o_N_l ;
	int  o_N_M ;
	double *  o_pmass ;
	double *  o_pcharge ;
	int *  o_particle_type ;
} Particle_in_Cell_MPI;
	#ifndef   LINEAR_OPERATOR_PICUS_001    
		
#define LINEAR_OPERATOR_PICUS_001 
 typedef int (* linear_operator_mpi )(Field3D_MPI * ,Field3D_MPI * ,void * );

	#else
		
	 #endif
typedef struct { 	Field3D_MPI *  r1 ;
	Field3D_MPI *  ti ;
	Field3D_MPI *  si1 ;
	Field3D_MPI *  si ;
	Field3D_MPI *  vi1 ;
	Field3D_MPI *  pi ;
	Field3D_MPI *  pi1 ;
	Field3D_MPI *  ri1 ;
	Field3D_MPI *  ri ;
	Field3D_MPI *  r0h ;
	linear_operator_mpi  A ;
	void *  fv ;
	int  zmax ;
	double  solve_err ;
} bicg_space;typedef struct { 	bicg_space  bs ;
	linear_operator_mpi  oscc ;
	Field3D_MPI *  x0 ;
	Field3D_MPI *  oscc_x0 ;
	Field3D_MPI *  res_tmp ;
	void *  fv ;
	void *   p_vfv  [5];	int  newton_zmax ;
	int  zmax ;
	double  solve_err ;
	double  newton_solve_err ;
	double  epsl ;
} jfnk_newton_space;
	#else
		
	 #endif
#include "c_/c_pscmc_inc.h"
#include "openmp_/openmp_pscmc_inc.h"
#include "c_/hydro_A.kernel_inc.h"
#include "c_/implicit_particle_mover.kernel_inc.h"
#include "c_/type3_georel.kernel_inc.h"
#include "c_/inner_split_pass.kernel_inc.h"
#include "c_/geo_particle_iter_mass.kernel_inc.h"
#include "c_/geo_particle_iter.kernel_inc.h"
#include "c_/rel_particle_iter.kernel_inc.h"
#include "c_/yeefdtd.kernel_inc.h"
#include "c_/mergefields.kernel_inc.h"
#include "c_/miniblas.kernel_inc.h"
#include "c_/general_partial_sort.kernel_inc.h"
#include "c_/move_back.kernel_inc.h"
#include "c_/particle_iter.kernel_inc.h"
#include "c_/mur_abc.kernel_inc.h"
#include "c_/dmbihamt.kernel_inc.h"
#include "c_/dm.kernel_inc.h"
#include "c_/geo_yeefdtd_rect.kernel_inc.h"
#include "c_/geo_yeefdtd.kernel_inc.h"
#include "c_yeefdtd.h"
#include "openmp_/hydro_A.kernel_inc.h"
#include "openmp_/implicit_particle_mover.kernel_inc.h"
#include "openmp_/type3_georel.kernel_inc.h"
#include "openmp_/inner_split_pass.kernel_inc.h"
#include "openmp_/geo_particle_iter_mass.kernel_inc.h"
#include "openmp_/geo_particle_iter.kernel_inc.h"
#include "openmp_/rel_particle_iter.kernel_inc.h"
#include "openmp_/yeefdtd.kernel_inc.h"
#include "openmp_/mergefields.kernel_inc.h"
#include "openmp_/miniblas.kernel_inc.h"
#include "openmp_/general_partial_sort.kernel_inc.h"
#include "openmp_/move_back.kernel_inc.h"
#include "openmp_/particle_iter.kernel_inc.h"
#include "openmp_/mur_abc.kernel_inc.h"
#include "openmp_/dmbihamt.kernel_inc.h"
#include "openmp_/dm.kernel_inc.h"
#include "openmp_/geo_yeefdtd_rect.kernel_inc.h"
#include "openmp_/geo_yeefdtd.kernel_inc.h"
#include "openmp_yeefdtd.h"
#include "space_filling_curve.h"
#include "mpifields.h"
#include "init_field3d_mpi.h"
#include <cgapsio.h>
#include "mpi_fieldio.h"
#include "call_curl_kernel.h"
#include "init_particle.h"
#include "sort_particle.h"
#include "init_adjoint_relation.h"
#include "split_shell.h"
#include "cfgcst.h"
typedef Field3D_MPI  Field3D_MPI_ALL ;
#include "checkpoint.h"
	char   IO_BLOCK_BUFFER  [16777216];
size_t  fwrite_multi_proc (char *  ptr ,size_t  size ,size_t  nmemb ,FILE *  stream ,int  cur_proc ,int  num_one_group ,int  num_max_proc ){
	size_t  ret = 0 ;
	int  io_proc = 	(  	(  cur_proc / num_one_group ) * num_one_group ) ;
	if (  	(  io_proc == cur_proc )  ){  
		(ret = 	(  ret + 	fwrite ( ptr , size , nmemb , stream ) ));
{
	long  g ;
	for ((g = 	(  io_proc + 1 )) ; 	(  g < 	(  io_proc + num_one_group ) ) ; (g = 	(  g + 1 )))
	{
	if (  	(  g >= num_max_proc )  ){  
		break;

	}else{
		0;

	 }
	long  alllen ;
	PS_MPI_Status  pms ;
	PS_MPI_Recv ( 	& ( alllen ) , 1 , PS_MPI_LONG , g , g , PS_MPI_COMM_WORLD , 	& ( pms ) );
	long  l = 0 ;
	for (0 ; 	(  l < alllen ) ; (l = 	(  l + 16777216 )))
	{
	long  num_send = 	(  alllen - l ) ;
	if (  	(  num_send > 16777216 )  ){  
		(num_send = 16777216);

	}else{
		0;

	 }
	if (  	(  num_send <= 0 )  ){  
		break;

	}else{
		0;

	 }
	PS_MPI_Recv ( IO_BLOCK_BUFFER , num_send , PS_MPI_CHAR , g , 	(  g * 2 ) , PS_MPI_COMM_WORLD , 	& ( pms ) );
(ret = 	(  ret + 	fwrite ( IO_BLOCK_BUFFER , 1 , num_send , stream ) ));
}}}
	}else{
			long  alllen = 	(  size * nmemb ) ;
	PS_MPI_Send ( 	& ( alllen ) , 1 , PS_MPI_LONG , io_proc , cur_proc , PS_MPI_COMM_WORLD );
	long  l = 0 ;
	for (0 ; 	(  l < alllen ) ; (l = 	(  l + 16777216 )))
	{
	long  num_send = 	(  alllen - l ) ;
	if (  	(  num_send > 16777216 )  ){  
		(num_send = 16777216);

	}else{
		0;

	 }
	if (  	(  num_send <= 0 )  ){  
		break;

	}else{
		0;

	 }
	PS_MPI_Status  pms ;
	PS_MPI_Send ( 	(  ptr + l ) , num_send , PS_MPI_CHAR , io_proc , 	(  cur_proc * 2 ) , PS_MPI_COMM_WORLD );
}
	 }
	return  ret ;}
size_t  fread_multi_proc (char *  ptr ,size_t  size ,size_t  nmemb ,FILE *  stream ,int  cur_proc ,int  num_one_group ,int  num_max_proc ){
	size_t  ret = 0 ;
	int  io_proc = 	(  	(  cur_proc / num_one_group ) * num_one_group ) ;
	if (  	(  io_proc == cur_proc )  ){  
		(ret = 	(  ret + 	fread ( ptr , size , nmemb , stream ) ));
{
	long  g ;
	for ((g = 	(  io_proc + 1 )) ; 	(  g < 	(  io_proc + num_one_group ) ) ; (g = 	(  g + 1 )))
	{
	if (  	(  g >= num_max_proc )  ){  
		break;

	}else{
		0;

	 }
	long  alllen ;
	PS_MPI_Status  pms ;
	PS_MPI_Recv ( 	& ( alllen ) , 1 , PS_MPI_LONG , g , g , PS_MPI_COMM_WORLD , 	& ( pms ) );
	long  l = 0 ;
	for (0 ; 	(  l < alllen ) ; (l = 	(  l + 16777216 )))
	{
	long  num_send = 	(  alllen - l ) ;
	if (  	(  num_send > 16777216 )  ){  
		(num_send = 16777216);

	}else{
		0;

	 }
	if (  	(  num_send <= 0 )  ){  
		break;

	}else{
		0;

	 }
(ret = 	(  ret + 	fread ( IO_BLOCK_BUFFER , 1 , num_send , stream ) ));
	PS_MPI_Send ( IO_BLOCK_BUFFER , num_send , PS_MPI_CHAR , g , 	(  g * 2 ) , PS_MPI_COMM_WORLD );
}}}
	}else{
			long  alllen = 	(  size * nmemb ) ;
	PS_MPI_Send ( 	& ( alllen ) , 1 , PS_MPI_LONG , io_proc , cur_proc , PS_MPI_COMM_WORLD );
	long  l = 0 ;
	for (0 ; 	(  l < alllen ) ; (l = 	(  l + 16777216 )))
	{
	long  num_send = 	(  alllen - l ) ;
	if (  	(  num_send > 16777216 )  ){  
		(num_send = 16777216);

	}else{
		0;

	 }
	if (  	(  num_send <= 0 )  ){  
		break;

	}else{
		0;

	 }
	PS_MPI_Status  pms ;
	PS_MPI_Recv ( 	(  ptr + l ) , num_send , PS_MPI_CHAR , io_proc , 	(  cur_proc * 2 ) , PS_MPI_COMM_WORLD , 	& ( pms ) );
}
	 }
	return  ret ;}
long  load_int (FILE *  fp ,int *  p_data ,int  cur_proc ,int  num_one_group ,int  num_max_proc ){
	return  	fread_multi_proc ( p_data , sizeof(int ) , 1 , fp , cur_proc , num_one_group , num_max_proc ) ;}
long  save_int (FILE *  fp ,int *  p_data ,int  cur_proc ,int  num_one_group ,int  num_max_proc ){
	return  	fwrite_multi_proc ( p_data , sizeof(int ) , 1 , fp , cur_proc , num_one_group , num_max_proc ) ;}
long  load_long (FILE *  fp ,long *  p_data ,int  cur_proc ,int  num_one_group ,int  num_max_proc ){
	return  	fread_multi_proc ( p_data , sizeof(long ) , 1 , fp , cur_proc , num_one_group , num_max_proc ) ;}
long  save_long (FILE *  fp ,long *  p_data ,int  cur_proc ,int  num_one_group ,int  num_max_proc ){
	return  	fwrite_multi_proc ( p_data , sizeof(long ) , 1 , fp , cur_proc , num_one_group , num_max_proc ) ;}
long  load_float (FILE *  fp ,float *  p_data ,int  cur_proc ,int  num_one_group ,int  num_max_proc ){
	return  	fread_multi_proc ( p_data , sizeof(float ) , 1 , fp , cur_proc , num_one_group , num_max_proc ) ;}
long  save_float (FILE *  fp ,float *  p_data ,int  cur_proc ,int  num_one_group ,int  num_max_proc ){
	return  	fwrite_multi_proc ( p_data , sizeof(float ) , 1 , fp , cur_proc , num_one_group , num_max_proc ) ;}
long  load_double (FILE *  fp ,double *  p_data ,int  cur_proc ,int  num_one_group ,int  num_max_proc ){
	return  	fread_multi_proc ( p_data , sizeof(double ) , 1 , fp , cur_proc , num_one_group , num_max_proc ) ;}
long  save_double (FILE *  fp ,double *  p_data ,int  cur_proc ,int  num_one_group ,int  num_max_proc ){
	return  	fwrite_multi_proc ( p_data , sizeof(double ) , 1 , fp , cur_proc , num_one_group , num_max_proc ) ;}
long  load_Particle_in_Cell_MPI (FILE *  fp ,Particle_in_Cell_MPI *  datas ,int  cur_proc ,int  num_one_group ,int  num_max_proc ){
	long  num_saved ;
	if (  	& ( 	( datas )->MPI_fieldE )  ){  
		(num_saved = 	(  num_saved + 	load_Field3D_MPI_ALL ( fp , 	& ( 	( datas )->MPI_fieldE ) , cur_proc , num_one_group , num_max_proc ) ));

	}else{
			assert ( 	(  NULL == "invalid pointer while load_ MPI_fieldE" ) );

	 }
	if (  	& ( 	( datas )->MPI_fieldB )  ){  
		(num_saved = 	(  num_saved + 	load_Field3D_MPI ( fp , 	& ( 	( datas )->MPI_fieldB ) , cur_proc , num_one_group , num_max_proc ) ));

	}else{
			assert ( 	(  NULL == "invalid pointer while load_ MPI_fieldB" ) );

	 }
	if (  	& ( 	( datas )->MPI_FoutJ )  ){  
		(num_saved = 	(  num_saved + 	load_Field3D_MPI ( fp , 	& ( 	( datas )->MPI_FoutJ ) , cur_proc , num_one_group , num_max_proc ) ));

	}else{
			assert ( 	(  NULL == "invalid pointer while load_ MPI_FoutJ" ) );

	 }
	if (  	& ( 	( datas )->MPI_fieldEtmp )  ){  
		(num_saved = 	(  num_saved + 	load_Field3D_MPI ( fp , 	& ( 	( datas )->MPI_fieldEtmp ) , cur_proc , num_one_group , num_max_proc ) ));

	}else{
			assert ( 	(  NULL == "invalid pointer while load_ MPI_fieldEtmp" ) );

	 }
	if (  	& ( 	( datas )->MPI_fieldE_ext )  ){  
		(num_saved = 	(  num_saved + 	load_Field3D_MPI ( fp , 	& ( 	( datas )->MPI_fieldE_ext ) , cur_proc , num_one_group , num_max_proc ) ));

	}else{
			assert ( 	(  NULL == "invalid pointer while load_ MPI_fieldE_ext" ) );

	 }
	if (  	& ( 	( datas )->MPI_fieldB_ext )  ){  
		(num_saved = 	(  num_saved + 	load_Field3D_MPI ( fp , 	& ( 	( datas )->MPI_fieldB_ext ) , cur_proc , num_one_group , num_max_proc ) ));

	}else{
			assert ( 	(  NULL == "invalid pointer while load_ MPI_fieldB_ext" ) );

	 }
	return  num_saved ;}
long  save_Particle_in_Cell_MPI (FILE *  fp ,Particle_in_Cell_MPI *  datas ,int  cur_proc ,int  num_one_group ,int  num_max_proc ){
	long  num_saved ;
	if (  	& ( 	( datas )->MPI_fieldE )  ){  
		(num_saved = 	(  num_saved + 	save_Field3D_MPI_ALL ( fp , 	& ( 	( datas )->MPI_fieldE ) , cur_proc , num_one_group , num_max_proc ) ));

	}else{
			assert ( 	(  NULL == "invalid pointer while save_ MPI_fieldE" ) );

	 }
	if (  	& ( 	( datas )->MPI_fieldB )  ){  
		(num_saved = 	(  num_saved + 	save_Field3D_MPI ( fp , 	& ( 	( datas )->MPI_fieldB ) , cur_proc , num_one_group , num_max_proc ) ));

	}else{
			assert ( 	(  NULL == "invalid pointer while save_ MPI_fieldB" ) );

	 }
	if (  	& ( 	( datas )->MPI_FoutJ )  ){  
		(num_saved = 	(  num_saved + 	save_Field3D_MPI ( fp , 	& ( 	( datas )->MPI_FoutJ ) , cur_proc , num_one_group , num_max_proc ) ));

	}else{
			assert ( 	(  NULL == "invalid pointer while save_ MPI_FoutJ" ) );

	 }
	if (  	& ( 	( datas )->MPI_fieldEtmp )  ){  
		(num_saved = 	(  num_saved + 	save_Field3D_MPI ( fp , 	& ( 	( datas )->MPI_fieldEtmp ) , cur_proc , num_one_group , num_max_proc ) ));

	}else{
			assert ( 	(  NULL == "invalid pointer while save_ MPI_fieldEtmp" ) );

	 }
	if (  	& ( 	( datas )->MPI_fieldE_ext )  ){  
		(num_saved = 	(  num_saved + 	save_Field3D_MPI ( fp , 	& ( 	( datas )->MPI_fieldE_ext ) , cur_proc , num_one_group , num_max_proc ) ));

	}else{
			assert ( 	(  NULL == "invalid pointer while save_ MPI_fieldE_ext" ) );

	 }
	if (  	& ( 	( datas )->MPI_fieldB_ext )  ){  
		(num_saved = 	(  num_saved + 	save_Field3D_MPI ( fp , 	& ( 	( datas )->MPI_fieldB_ext ) , cur_proc , num_one_group , num_max_proc ) ));

	}else{
			assert ( 	(  NULL == "invalid pointer while save_ MPI_fieldB_ext" ) );

	 }
	return  num_saved ;}
long  load_Field3D_MPI_ALL (FILE *  fp ,Field3D_MPI_ALL *  datas ,int  cur_proc ,int  num_one_group ,int  num_max_proc ){
	long  num_saved ;
{
	long  tmpi2 ;
	for ((tmpi2 = 0) ; 	(  tmpi2 < 	( datas )->num_runtime ) ; (tmpi2 = 	(  tmpi2 + 1 )))
	{
(num_saved = 	(  num_saved + 	load_Field3D_Seq ( fp , 	(  	( datas )->data + tmpi2 ) , cur_proc , num_one_group , num_max_proc ) ));
}}{
	long  tmpi2 ;
	for ((tmpi2 = 0) ; 	(  tmpi2 < 	(  	( datas )->num_runtime * 	( datas )->num_spec ) ) ; (tmpi2 = 	(  tmpi2 + 1 )))
	{
(num_saved = 	(  num_saved + 	load_One_Particle_Collection ( fp , 	(  	( datas )->particles + tmpi2 ) , cur_proc , num_one_group , num_max_proc ) ));
}}	return  num_saved ;}
long  save_Field3D_MPI_ALL (FILE *  fp ,Field3D_MPI_ALL *  datas ,int  cur_proc ,int  num_one_group ,int  num_max_proc ){
	long  num_saved ;
{
	long  tmpi2 ;
	for ((tmpi2 = 0) ; 	(  tmpi2 < 	( datas )->num_runtime ) ; (tmpi2 = 	(  tmpi2 + 1 )))
	{
(num_saved = 	(  num_saved + 	save_Field3D_Seq ( fp , 	(  	( datas )->data + tmpi2 ) , cur_proc , num_one_group , num_max_proc ) ));
}}{
	long  tmpi2 ;
	for ((tmpi2 = 0) ; 	(  tmpi2 < 	(  	( datas )->num_runtime * 	( datas )->num_spec ) ) ; (tmpi2 = 	(  tmpi2 + 1 )))
	{
(num_saved = 	(  num_saved + 	save_One_Particle_Collection ( fp , 	(  	( datas )->particles + tmpi2 ) , cur_proc , num_one_group , num_max_proc ) ));
}}	return  num_saved ;}
long  load_Field3D_MPI (FILE *  fp ,Field3D_MPI *  datas ,int  cur_proc ,int  num_one_group ,int  num_max_proc ){
	long  num_saved ;
{
	long  tmpi2 ;
	for ((tmpi2 = 0) ; 	(  tmpi2 < 	( datas )->num_runtime ) ; (tmpi2 = 	(  tmpi2 + 1 )))
	{
(num_saved = 	(  num_saved + 	load_Field3D_Seq ( fp , 	(  	( datas )->data + tmpi2 ) , cur_proc , num_one_group , num_max_proc ) ));
}}	return  num_saved ;}
long  save_Field3D_MPI (FILE *  fp ,Field3D_MPI *  datas ,int  cur_proc ,int  num_one_group ,int  num_max_proc ){
	long  num_saved ;
{
	long  tmpi2 ;
	for ((tmpi2 = 0) ; 	(  tmpi2 < 	( datas )->num_runtime ) ; (tmpi2 = 	(  tmpi2 + 1 )))
	{
(num_saved = 	(  num_saved + 	save_Field3D_Seq ( fp , 	(  	( datas )->data + tmpi2 ) , cur_proc , num_one_group , num_max_proc ) ));
}}	return  num_saved ;}
long  load_Field3D_Seq (FILE *  fp ,Field3D_Seq *  datas ,int  cur_proc ,int  num_one_group ,int  num_max_proc ){
	long  num_saved ;
{
	double *  tmp_array ;
	int  CD_type = 	( datas )->CD_type ;
	if (  	(  0 == CD_type )  ){  
			c_pscmc_get_h_data ( 	( datas )->main_data , 	& ( tmp_array ) );

	}else{
			if (  	(  1 == CD_type )  ){  
			openmp_pscmc_get_h_data ( 	( datas )->main_data , 	& ( tmp_array ) );

	}else{
		0;

	 }

	 }
(num_saved = 	(  num_saved + 	fread_multi_proc ( tmp_array , ((	(  0 == CD_type ))?(	c_pscmc_mem_get_num ( 	( datas )->main_data )):(((	(  1 == CD_type ))?(	openmp_pscmc_mem_get_num ( 	( datas )->main_data )):(0)))) , sizeof(double ) , fp , cur_proc , num_one_group , num_max_proc ) ));
}	return  num_saved ;}
long  save_Field3D_Seq (FILE *  fp ,Field3D_Seq *  datas ,int  cur_proc ,int  num_one_group ,int  num_max_proc ){
	long  num_saved ;
{
	double *  tmp_array ;
	int  CD_type = 	( datas )->CD_type ;
	if (  	(  0 == CD_type )  ){  
			c_pscmc_get_h_data ( 	( datas )->main_data , 	& ( tmp_array ) );

	}else{
			if (  	(  1 == CD_type )  ){  
			openmp_pscmc_get_h_data ( 	( datas )->main_data , 	& ( tmp_array ) );

	}else{
		0;

	 }

	 }
(num_saved = 	(  num_saved + 	fwrite_multi_proc ( tmp_array , ((	(  0 == CD_type ))?(	c_pscmc_mem_get_num ( 	( datas )->main_data )):(((	(  1 == CD_type ))?(	openmp_pscmc_mem_get_num ( 	( datas )->main_data )):(0)))) , sizeof(double ) , fp , cur_proc , num_one_group , num_max_proc ) ));
}	return  num_saved ;}
long  load_One_Particle_Collection (FILE *  fp ,One_Particle_Collection *  datas ,int  cur_proc ,int  num_one_group ,int  num_max_proc ){
	long  num_saved ;
{
	double *  tmp_array ;
	int  CD_type = 	( 	( datas )->pfield )->CD_type ;
	if (  	(  0 == CD_type )  ){  
			c_pscmc_get_h_data ( 	( datas )->inoutput , 	& ( tmp_array ) );

	}else{
			if (  	(  1 == CD_type )  ){  
			openmp_pscmc_get_h_data ( 	( datas )->inoutput , 	& ( tmp_array ) );

	}else{
		0;

	 }

	 }
(num_saved = 	(  num_saved + 	fread_multi_proc ( tmp_array , ((	(  0 == CD_type ))?(	c_pscmc_mem_get_num ( 	( datas )->inoutput )):(((	(  1 == CD_type ))?(	openmp_pscmc_mem_get_num ( 	( datas )->inoutput )):(0)))) , sizeof(double ) , fp , cur_proc , num_one_group , num_max_proc ) ));
}{
	int *  tmp_array ;
	int  CD_type = 	( 	( datas )->pfield )->CD_type ;
	if (  	(  0 == CD_type )  ){  
			c_pscmc_get_h_data ( 	( datas )->xyzw , 	& ( tmp_array ) );

	}else{
			if (  	(  1 == CD_type )  ){  
			openmp_pscmc_get_h_data ( 	( datas )->xyzw , 	& ( tmp_array ) );

	}else{
		0;

	 }

	 }
(num_saved = 	(  num_saved + 	fread_multi_proc ( tmp_array , ((	(  0 == CD_type ))?(	c_pscmc_mem_get_num ( 	( datas )->xyzw )):(((	(  1 == CD_type ))?(	openmp_pscmc_mem_get_num ( 	( datas )->xyzw )):(0)))) , sizeof(int ) , fp , cur_proc , num_one_group , num_max_proc ) ));
}{
	double *  tmp_array ;
	int  CD_type = 	( 	( datas )->pfield )->CD_type ;
	if (  	(  0 == CD_type )  ){  
			c_pscmc_get_h_data ( 	( datas )->cu_cache , 	& ( tmp_array ) );

	}else{
			if (  	(  1 == CD_type )  ){  
			openmp_pscmc_get_h_data ( 	( datas )->cu_cache , 	& ( tmp_array ) );

	}else{
		0;

	 }

	 }
(num_saved = 	(  num_saved + 	fread_multi_proc ( tmp_array , ((	(  0 == CD_type ))?(	c_pscmc_mem_get_num ( 	( datas )->cu_cache )):(((	(  1 == CD_type ))?(	openmp_pscmc_mem_get_num ( 	( datas )->cu_cache )):(0)))) , sizeof(double ) , fp , cur_proc , num_one_group , num_max_proc ) ));
}{
	int *  tmp_array ;
	int  CD_type = 	( 	( datas )->pfield )->CD_type ;
	if (  	(  0 == CD_type )  ){  
			c_pscmc_get_h_data ( 	( datas )->cu_xyzw , 	& ( tmp_array ) );

	}else{
			if (  	(  1 == CD_type )  ){  
			openmp_pscmc_get_h_data ( 	( datas )->cu_xyzw , 	& ( tmp_array ) );

	}else{
		0;

	 }

	 }
(num_saved = 	(  num_saved + 	fread_multi_proc ( tmp_array , ((	(  0 == CD_type ))?(	c_pscmc_mem_get_num ( 	( datas )->cu_xyzw )):(((	(  1 == CD_type ))?(	openmp_pscmc_mem_get_num ( 	( datas )->cu_xyzw )):(0)))) , sizeof(int ) , fp , cur_proc , num_one_group , num_max_proc ) ));
}{
	long *  tmp_array ;
	int  CD_type = 	( 	( datas )->pfield )->CD_type ;
	if (  	(  0 == CD_type )  ){  
			c_pscmc_get_h_data ( 	( datas )->adjoint_vec_pids , 	& ( tmp_array ) );

	}else{
			if (  	(  1 == CD_type )  ){  
			openmp_pscmc_get_h_data ( 	( datas )->adjoint_vec_pids , 	& ( tmp_array ) );

	}else{
		0;

	 }

	 }
(num_saved = 	(  num_saved + 	fread_multi_proc ( tmp_array , ((	(  0 == CD_type ))?(	c_pscmc_mem_get_num ( 	( datas )->adjoint_vec_pids )):(((	(  1 == CD_type ))?(	openmp_pscmc_mem_get_num ( 	( datas )->adjoint_vec_pids )):(0)))) , sizeof(long ) , fp , cur_proc , num_one_group , num_max_proc ) ));
}	return  num_saved ;}
long  save_One_Particle_Collection (FILE *  fp ,One_Particle_Collection *  datas ,int  cur_proc ,int  num_one_group ,int  num_max_proc ){
	long  num_saved ;
{
	double *  tmp_array ;
	int  CD_type = 	( 	( datas )->pfield )->CD_type ;
	if (  	(  0 == CD_type )  ){  
			c_pscmc_get_h_data ( 	( datas )->inoutput , 	& ( tmp_array ) );

	}else{
			if (  	(  1 == CD_type )  ){  
			openmp_pscmc_get_h_data ( 	( datas )->inoutput , 	& ( tmp_array ) );

	}else{
		0;

	 }

	 }
(num_saved = 	(  num_saved + 	fwrite_multi_proc ( tmp_array , ((	(  0 == CD_type ))?(	c_pscmc_mem_get_num ( 	( datas )->inoutput )):(((	(  1 == CD_type ))?(	openmp_pscmc_mem_get_num ( 	( datas )->inoutput )):(0)))) , sizeof(double ) , fp , cur_proc , num_one_group , num_max_proc ) ));
}{
	int *  tmp_array ;
	int  CD_type = 	( 	( datas )->pfield )->CD_type ;
	if (  	(  0 == CD_type )  ){  
			c_pscmc_get_h_data ( 	( datas )->xyzw , 	& ( tmp_array ) );

	}else{
			if (  	(  1 == CD_type )  ){  
			openmp_pscmc_get_h_data ( 	( datas )->xyzw , 	& ( tmp_array ) );

	}else{
		0;

	 }

	 }
(num_saved = 	(  num_saved + 	fwrite_multi_proc ( tmp_array , ((	(  0 == CD_type ))?(	c_pscmc_mem_get_num ( 	( datas )->xyzw )):(((	(  1 == CD_type ))?(	openmp_pscmc_mem_get_num ( 	( datas )->xyzw )):(0)))) , sizeof(int ) , fp , cur_proc , num_one_group , num_max_proc ) ));
}{
	double *  tmp_array ;
	int  CD_type = 	( 	( datas )->pfield )->CD_type ;
	if (  	(  0 == CD_type )  ){  
			c_pscmc_get_h_data ( 	( datas )->cu_cache , 	& ( tmp_array ) );

	}else{
			if (  	(  1 == CD_type )  ){  
			openmp_pscmc_get_h_data ( 	( datas )->cu_cache , 	& ( tmp_array ) );

	}else{
		0;

	 }

	 }
(num_saved = 	(  num_saved + 	fwrite_multi_proc ( tmp_array , ((	(  0 == CD_type ))?(	c_pscmc_mem_get_num ( 	( datas )->cu_cache )):(((	(  1 == CD_type ))?(	openmp_pscmc_mem_get_num ( 	( datas )->cu_cache )):(0)))) , sizeof(double ) , fp , cur_proc , num_one_group , num_max_proc ) ));
}{
	int *  tmp_array ;
	int  CD_type = 	( 	( datas )->pfield )->CD_type ;
	if (  	(  0 == CD_type )  ){  
			c_pscmc_get_h_data ( 	( datas )->cu_xyzw , 	& ( tmp_array ) );

	}else{
			if (  	(  1 == CD_type )  ){  
			openmp_pscmc_get_h_data ( 	( datas )->cu_xyzw , 	& ( tmp_array ) );

	}else{
		0;

	 }

	 }
(num_saved = 	(  num_saved + 	fwrite_multi_proc ( tmp_array , ((	(  0 == CD_type ))?(	c_pscmc_mem_get_num ( 	( datas )->cu_xyzw )):(((	(  1 == CD_type ))?(	openmp_pscmc_mem_get_num ( 	( datas )->cu_xyzw )):(0)))) , sizeof(int ) , fp , cur_proc , num_one_group , num_max_proc ) ));
}{
	long *  tmp_array ;
	int  CD_type = 	( 	( datas )->pfield )->CD_type ;
	if (  	(  0 == CD_type )  ){  
			c_pscmc_get_h_data ( 	( datas )->adjoint_vec_pids , 	& ( tmp_array ) );

	}else{
			if (  	(  1 == CD_type )  ){  
			openmp_pscmc_get_h_data ( 	( datas )->adjoint_vec_pids , 	& ( tmp_array ) );

	}else{
		0;

	 }

	 }
(num_saved = 	(  num_saved + 	fwrite_multi_proc ( tmp_array , ((	(  0 == CD_type ))?(	c_pscmc_mem_get_num ( 	( datas )->adjoint_vec_pids )):(((	(  1 == CD_type ))?(	openmp_pscmc_mem_get_num ( 	( datas )->adjoint_vec_pids )):(0)))) , sizeof(long ) , fp , cur_proc , num_one_group , num_max_proc ) ));
}	return  num_saved ;}
int  save_state_from_fp (FILE *  fp ,int  cur_proc ,int  num_one_group ,int  num_max_proc ){
	assert ( 	save_long ( fp , 	& ( XMAX ) , cur_proc , 1 , num_max_proc ) );
	assert ( 	save_long ( fp , 	& ( YMAX ) , cur_proc , 1 , num_max_proc ) );
	assert ( 	save_long ( fp , 	& ( ZMAX ) , cur_proc , 1 , num_max_proc ) );
	assert ( 	save_long ( fp , 	& ( NUM_PROCESS ) , cur_proc , 1 , num_max_proc ) );
	assert ( 	save_long ( fp , 	& ( NUM_RUNTIME ) , cur_proc , 1 , num_max_proc ) );
	assert ( 	save_long ( fp , 	& ( NUM_MAX_RUNTIME ) , cur_proc , 1 , num_max_proc ) );
	assert ( 	save_long ( fp , 	& ( NUM_N_HILBERT ) , cur_proc , 1 , num_max_proc ) );
	assert ( 	save_long ( fp , 	& ( NUM_SPEC ) , cur_proc , 1 , num_max_proc ) );
	return  0 ;}
int  load_state_from_fp (FILE *  fp ,int  cur_proc ,int  num_one_group ,int  num_max_proc ){
{
	long  tmpvar ;
	assert ( 	load_long ( fp , 	& ( tmpvar ) , cur_proc , 1 , num_max_proc ) );
	if (  	(  tmpvar != XMAX )  ){  
			fprintf ( stderr , "Error: variable XMAX not match %ld != %ld\n" , tmpvar , XMAX );

	}else{
		0;

	 }
}{
	long  tmpvar ;
	assert ( 	load_long ( fp , 	& ( tmpvar ) , cur_proc , 1 , num_max_proc ) );
	if (  	(  tmpvar != YMAX )  ){  
			fprintf ( stderr , "Error: variable YMAX not match %ld != %ld\n" , tmpvar , YMAX );

	}else{
		0;

	 }
}{
	long  tmpvar ;
	assert ( 	load_long ( fp , 	& ( tmpvar ) , cur_proc , 1 , num_max_proc ) );
	if (  	(  tmpvar != ZMAX )  ){  
			fprintf ( stderr , "Error: variable ZMAX not match %ld != %ld\n" , tmpvar , ZMAX );

	}else{
		0;

	 }
}{
	long  tmpvar ;
	assert ( 	load_long ( fp , 	& ( tmpvar ) , cur_proc , 1 , num_max_proc ) );
	if (  	(  tmpvar != NUM_PROCESS )  ){  
			fprintf ( stderr , "Error: variable NUM_PROCESS not match %ld != %ld\n" , tmpvar , NUM_PROCESS );

	}else{
		0;

	 }
}{
	long  tmpvar ;
	assert ( 	load_long ( fp , 	& ( tmpvar ) , cur_proc , 1 , num_max_proc ) );
	if (  	(  tmpvar != NUM_RUNTIME )  ){  
			fprintf ( stderr , "Error: variable NUM_RUNTIME not match %ld != %ld\n" , tmpvar , NUM_RUNTIME );

	}else{
		0;

	 }
}{
	long  tmpvar ;
	assert ( 	load_long ( fp , 	& ( tmpvar ) , cur_proc , 1 , num_max_proc ) );
	if (  	(  tmpvar != NUM_MAX_RUNTIME )  ){  
			fprintf ( stderr , "Error: variable NUM_MAX_RUNTIME not match %ld != %ld\n" , tmpvar , NUM_MAX_RUNTIME );

	}else{
		0;

	 }
}{
	long  tmpvar ;
	assert ( 	load_long ( fp , 	& ( tmpvar ) , cur_proc , 1 , num_max_proc ) );
	if (  	(  tmpvar != NUM_N_HILBERT )  ){  
			fprintf ( stderr , "Error: variable NUM_N_HILBERT not match %ld != %ld\n" , tmpvar , NUM_N_HILBERT );

	}else{
		0;

	 }
}{
	long  tmpvar ;
	assert ( 	load_long ( fp , 	& ( tmpvar ) , cur_proc , 1 , num_max_proc ) );
	if (  	(  tmpvar != NUM_SPEC )  ){  
			fprintf ( stderr , "Error: variable NUM_SPEC not match %ld != %ld\n" , tmpvar , NUM_SPEC );

	}else{
		0;

	 }
}	return  0 ;}
FILE *  load_identity_state_and_alloc_file_pointer (int  mpi_rank ,int  num_one_group ){
	char   file_name  [100];	int  write_rank = 	(  mpi_rank / num_one_group ) ;
	int  num_max_proc ;
	PS_MPI_Comm_size ( PS_MPI_COMM_WORLD , 	& ( num_max_proc ) );
	sprintf ( file_name , ".save_%d" , write_rank );
	if (  	(  	(  write_rank * num_one_group ) != mpi_rank )  ){  
			return  NULL ;
	}else{
		0;

	 }
	FILE *  fp = 	fopen ( file_name , "r+" ) ;
	if (  fp  ){  
			load_state_from_fp ( fp , mpi_rank , num_one_group , num_max_proc );

	}else{
		0;

	 }
	return  fp ;}
FILE *  save_identity_state_and_alloc_file_pointer (int  mpi_rank ,int  num_one_group ){
	char   old_file_name  [100];	char   new_file_name  [100];	int  write_rank = 	(  mpi_rank / num_one_group ) ;
	sprintf ( old_file_name , ".save_%d" , write_rank );
	sprintf ( new_file_name , ".save_%d_old" , write_rank );
	int  num_max_proc ;
	PS_MPI_Comm_size ( PS_MPI_COMM_WORLD , 	& ( num_max_proc ) );
	MPI_Barrier ( MPI_COMM_WORLD );
	if (  	(  	(  write_rank * num_one_group ) == mpi_rank )  ){  
			rename ( old_file_name , new_file_name );
	fprintf ( stderr , "Proc %d: moved\n" , write_rank );

	}else{
		0;

	 }
	MPI_Barrier ( MPI_COMM_WORLD );
	if (  	(  	(  write_rank * num_one_group ) == mpi_rank )  ){  
			FILE *  fp = 	fopen ( old_file_name , "w+" ) ;
	save_state_from_fp ( fp , mpi_rank , num_one_group , num_max_proc );
	return  fp ;
	}else{
			return  NULL ;
	 }
}
