typedef struct { 	double *  y ;
	double *  rdcd ;
	long *  y_cpu_core ;
	long *  numvec ;
	long *  XLEN ;
	long *  YLEN ;
	long *  ZLEN ;
	int *  ovlp ;
	long *  xblock ;
	long *  yblock ;
	long *  zblock ;
	int *  num_ele ;
	long  y_len ;
	long  rdcd_len ;
	long  y_cpu_core_len ;
	long  numvec_len ;
	long  XLEN_len ;
	long  YLEN_len ;
	long  ZLEN_len ;
	long  ovlp_len ;
	long  xblock_len ;
	long  yblock_len ;
	long  zblock_len ;
	long  num_ele_len ;
} openmp_blas_sum_struct;void  openmp_blas_sum_scmc_kernel (double *  y ,double *  rdcd ,long  y_cpu_core ,long  numvec ,long  XLEN ,long  YLEN ,long  ZLEN ,int  ovlp ,long  xblock ,long  yblock ,long  zblock ,int  num_ele ,long  yid_kernel ,long  ylen_kernel );
typedef struct { 	double *  y ;
	double *  x ;
	double *  rdcd ;
	long *  y_cpu_core ;
	long *  numvec ;
	long *  XLEN ;
	long *  YLEN ;
	long *  ZLEN ;
	int *  ovlp ;
	long *  xblock ;
	long *  yblock ;
	long *  zblock ;
	int *  num_ele ;
	long  y_len ;
	long  x_len ;
	long  rdcd_len ;
	long  y_cpu_core_len ;
	long  numvec_len ;
	long  XLEN_len ;
	long  YLEN_len ;
	long  ZLEN_len ;
	long  ovlp_len ;
	long  xblock_len ;
	long  yblock_len ;
	long  zblock_len ;
	long  num_ele_len ;
} openmp_blas_dot_struct;void  openmp_blas_dot_scmc_kernel (double *  y ,double *  x ,double *  rdcd ,long  y_cpu_core ,long  numvec ,long  XLEN ,long  YLEN ,long  ZLEN ,int  ovlp ,long  xblock ,long  yblock ,long  zblock ,int  num_ele ,long  yid_kernel ,long  ylen_kernel );
typedef struct { 	double *  y ;
	double *  rdcd ;
	long *  y_cpu_core ;
	long *  numvec ;
	long *  XLEN ;
	long *  YLEN ;
	long *  ZLEN ;
	int *  ovlp ;
	long *  xblock ;
	long *  yblock ;
	long *  zblock ;
	int *  num_ele ;
	long  y_len ;
	long  rdcd_len ;
	long  y_cpu_core_len ;
	long  numvec_len ;
	long  XLEN_len ;
	long  YLEN_len ;
	long  ZLEN_len ;
	long  ovlp_len ;
	long  xblock_len ;
	long  yblock_len ;
	long  zblock_len ;
	long  num_ele_len ;
} openmp_blas_findmax_struct;void  openmp_blas_findmax_scmc_kernel (double *  y ,double *  rdcd ,long  y_cpu_core ,long  numvec ,long  XLEN ,long  YLEN ,long  ZLEN ,int  ovlp ,long  xblock ,long  yblock ,long  zblock ,int  num_ele ,long  yid_kernel ,long  ylen_kernel );
typedef struct { 	double *  y ;
	double *  x ;
	long *  y_cpu_core ;
	long *  numvec ;
	long *  XLEN ;
	long *  YLEN ;
	long *  ZLEN ;
	int *  ovlp ;
	long *  xblock ;
	long *  yblock ;
	long *  zblock ;
	int *  num_ele ;
	long  y_len ;
	long  x_len ;
	long  y_cpu_core_len ;
	long  numvec_len ;
	long  XLEN_len ;
	long  YLEN_len ;
	long  ZLEN_len ;
	long  ovlp_len ;
	long  xblock_len ;
	long  yblock_len ;
	long  zblock_len ;
	long  num_ele_len ;
} openmp_blas_mulxy_struct;void  openmp_blas_mulxy_scmc_kernel (double *  y ,double *  x ,long  y_cpu_core ,long  numvec ,long  XLEN ,long  YLEN ,long  ZLEN ,int  ovlp ,long  xblock ,long  yblock ,long  zblock ,int  num_ele ,long  yid_kernel ,long  ylen_kernel );
typedef struct { 	double *  y ;
	double *  x ;
	double *  a ;
	double *  b ;
	long *  y_cpu_core ;
	long *  numvec ;
	long *  XLEN ;
	long *  YLEN ;
	long *  ZLEN ;
	int *  ovlp ;
	long *  xblock ;
	long *  yblock ;
	long *  zblock ;
	int *  num_ele ;
	long  y_len ;
	long  x_len ;
	long  a_len ;
	long  b_len ;
	long  y_cpu_core_len ;
	long  numvec_len ;
	long  XLEN_len ;
	long  YLEN_len ;
	long  ZLEN_len ;
	long  ovlp_len ;
	long  xblock_len ;
	long  yblock_len ;
	long  zblock_len ;
	long  num_ele_len ;
} openmp_blas_axpby_struct;void  openmp_blas_axpby_scmc_kernel (double *  y ,double *  x ,double  a ,double  b ,long  y_cpu_core ,long  numvec ,long  XLEN ,long  YLEN ,long  ZLEN ,int  ovlp ,long  xblock ,long  yblock ,long  zblock ,int  num_ele ,long  yid_kernel ,long  ylen_kernel );
typedef struct { 	double *  y ;
	double *  x ;
	double *  a ;
	long *  y_cpu_core ;
	long *  numvec ;
	long *  XLEN ;
	long *  YLEN ;
	long *  ZLEN ;
	int *  ovlp ;
	long *  xblock ;
	long *  yblock ;
	long *  zblock ;
	int *  num_ele ;
	long  y_len ;
	long  x_len ;
	long  a_len ;
	long  y_cpu_core_len ;
	long  numvec_len ;
	long  XLEN_len ;
	long  YLEN_len ;
	long  ZLEN_len ;
	long  ovlp_len ;
	long  xblock_len ;
	long  yblock_len ;
	long  zblock_len ;
	long  num_ele_len ;
} openmp_blas_axpy_struct;void  openmp_blas_axpy_scmc_kernel (double *  y ,double *  x ,double  a ,long  y_cpu_core ,long  numvec ,long  XLEN ,long  YLEN ,long  ZLEN ,int  ovlp ,long  xblock ,long  yblock ,long  zblock ,int  num_ele ,long  yid_kernel ,long  ylen_kernel );
typedef struct { 	double *  y ;
	double *  x ;
	double *  a ;
	long *  y_cpu_core ;
	long *  numvec ;
	long *  XLEN ;
	long *  YLEN ;
	long *  ZLEN ;
	int *  ovlp ;
	long *  xblock ;
	long *  yblock ;
	long *  zblock ;
	int *  num_ele ;
	long  y_len ;
	long  x_len ;
	long  a_len ;
	long  y_cpu_core_len ;
	long  numvec_len ;
	long  XLEN_len ;
	long  YLEN_len ;
	long  ZLEN_len ;
	long  ovlp_len ;
	long  xblock_len ;
	long  yblock_len ;
	long  zblock_len ;
	long  num_ele_len ;
} openmp_blas_yisax_struct;void  openmp_blas_yisax_scmc_kernel (double *  y ,double *  x ,double  a ,long  y_cpu_core ,long  numvec ,long  XLEN ,long  YLEN ,long  ZLEN ,int  ovlp ,long  xblock ,long  yblock ,long  zblock ,int  num_ele ,long  yid_kernel ,long  ylen_kernel );
typedef struct { 	double *  y ;
	long *  y_cpu_core ;
	long *  numvec ;
	long *  XLEN ;
	long *  YLEN ;
	long *  ZLEN ;
	int *  ovlp ;
	long *  xblock ;
	long *  yblock ;
	long *  zblock ;
	int *  num_ele ;
	long  y_len ;
	long  y_cpu_core_len ;
	long  numvec_len ;
	long  XLEN_len ;
	long  YLEN_len ;
	long  ZLEN_len ;
	long  ovlp_len ;
	long  xblock_len ;
	long  yblock_len ;
	long  zblock_len ;
	long  num_ele_len ;
} openmp_blas_invy_struct;void  openmp_blas_invy_scmc_kernel (double *  y ,long  y_cpu_core ,long  numvec ,long  XLEN ,long  YLEN ,long  ZLEN ,int  ovlp ,long  xblock ,long  yblock ,long  zblock ,int  num_ele ,long  yid_kernel ,long  ylen_kernel );
typedef struct { 	double *  y ;
	double *  x ;
	double *  u ;
	double *  minus_over_q_e ;
	long *  y_cpu_core ;
	long *  numvec ;
	long *  XLEN ;
	long *  YLEN ;
	long *  ZLEN ;
	int *  ovlp ;
	long *  xblock ;
	long *  yblock ;
	long *  zblock ;
	int *  num_ele ;
	long  y_len ;
	long  x_len ;
	long  u_len ;
	long  minus_over_q_e_len ;
	long  y_cpu_core_len ;
	long  numvec_len ;
	long  XLEN_len ;
	long  YLEN_len ;
	long  ZLEN_len ;
	long  ovlp_len ;
	long  xblock_len ;
	long  yblock_len ;
	long  zblock_len ;
	long  num_ele_len ;
} openmp_blas_get_ITG_Potential_struct;void  openmp_blas_get_ITG_Potential_scmc_kernel (double *  y ,double *  x ,double *  u ,double  minus_over_q_e ,long  y_cpu_core ,long  numvec ,long  XLEN ,long  YLEN ,long  ZLEN ,int  ovlp ,long  xblock ,long  yblock ,long  zblock ,int  num_ele ,long  yid_kernel ,long  ylen_kernel );
typedef struct { 	double *  y ;
	double *  a ;
	long *  y_cpu_core ;
	long *  numvec ;
	long *  XLEN ;
	long *  YLEN ;
	long *  ZLEN ;
	int *  ovlp ;
	long *  xblock ;
	long *  yblock ;
	long *  zblock ;
	int *  num_ele ;
	long  y_len ;
	long  a_len ;
	long  y_cpu_core_len ;
	long  numvec_len ;
	long  XLEN_len ;
	long  YLEN_len ;
	long  ZLEN_len ;
	long  ovlp_len ;
	long  xblock_len ;
	long  yblock_len ;
	long  zblock_len ;
	long  num_ele_len ;
} openmp_blas_yisconst_struct;void  openmp_blas_yisconst_scmc_kernel (double *  y ,double  a ,long  y_cpu_core ,long  numvec ,long  XLEN ,long  YLEN ,long  ZLEN ,int  ovlp ,long  xblock ,long  yblock ,long  zblock ,int  num_ele ,long  yid_kernel ,long  ylen_kernel );
typedef struct { 	double *  y ;
	long *  y_cpu_core ;
	long *  numvec ;
	long *  XLEN ;
	long *  YLEN ;
	long *  ZLEN ;
	int *  ovlp ;
	long *  xblock ;
	long *  yblock ;
	long *  zblock ;
	int *  num_ele ;
	long  y_len ;
	long  y_cpu_core_len ;
	long  numvec_len ;
	long  XLEN_len ;
	long  YLEN_len ;
	long  ZLEN_len ;
	long  ovlp_len ;
	long  xblock_len ;
	long  yblock_len ;
	long  zblock_len ;
	long  num_ele_len ;
} openmp_blas_yiszero_struct;void  openmp_blas_yiszero_scmc_kernel (double *  y ,long  y_cpu_core ,long  numvec ,long  XLEN ,long  YLEN ,long  ZLEN ,int  ovlp ,long  xblock ,long  yblock ,long  zblock ,int  num_ele ,long  yid_kernel ,long  ylen_kernel );
typedef struct { 	double *  y ;
	double *  x ;
	long *  y_cpu_core ;
	long *  numvec ;
	long *  XLEN ;
	long *  YLEN ;
	long *  ZLEN ;
	int *  ovlp ;
	long *  xblock ;
	long *  yblock ;
	long *  zblock ;
	int *  num_ele ;
	long  y_len ;
	long  x_len ;
	long  y_cpu_core_len ;
	long  numvec_len ;
	long  XLEN_len ;
	long  YLEN_len ;
	long  ZLEN_len ;
	long  ovlp_len ;
	long  xblock_len ;
	long  yblock_len ;
	long  zblock_len ;
	long  num_ele_len ;
} openmp_blas_mulxy_numele3_struct;void  openmp_blas_mulxy_numele3_scmc_kernel (double *  y ,double *  x ,long  y_cpu_core ,long  numvec ,long  XLEN ,long  YLEN ,long  ZLEN ,int  ovlp ,long  xblock ,long  yblock ,long  zblock ,int  num_ele ,long  yid_kernel ,long  ylen_kernel );
typedef struct { 	double *  y ;
	long *  y_cpu_core ;
	long *  numvec ;
	long *  XLEN ;
	long *  YLEN ;
	long *  ZLEN ;
	int *  ovlp ;
	long *  xblock ;
	long *  yblock ;
	long *  zblock ;
	int *  num_ele ;
	long  y_len ;
	long  y_cpu_core_len ;
	long  numvec_len ;
	long  XLEN_len ;
	long  YLEN_len ;
	long  ZLEN_len ;
	long  ovlp_len ;
	long  xblock_len ;
	long  yblock_len ;
	long  zblock_len ;
	long  num_ele_len ;
} openmp_blas_yiszero_synced_struct;void  openmp_blas_yiszero_synced_scmc_kernel (double *  y ,long  y_cpu_core ,long  numvec ,long  XLEN ,long  YLEN ,long  ZLEN ,int  ovlp ,long  xblock ,long  yblock ,long  zblock ,int  num_ele ,long  yid_kernel ,long  ylen_kernel );
