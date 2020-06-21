typedef struct { 	double *  out_vA ;
	double *  alpha_beta_new ;
	double *  alpha_beta ;
	double *  rho_s_vx ;
	double *  vA ;
	double *  vAzero ;
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
	int *  num_ele_rho_s_vx ;
	int *  num_ele_vA ;
	int *  num_ele_alpha_beta ;
	double *  QM0 ;
	double *  U0 ;
	double *  DX ;
	double *  DY ;
	double *  DZ ;
	double *  DT ;
	long  out_vA_len ;
	long  alpha_beta_new_len ;
	long  alpha_beta_len ;
	long  rho_s_vx_len ;
	long  vA_len ;
	long  vAzero_len ;
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
	long  num_ele_rho_s_vx_len ;
	long  num_ele_vA_len ;
	long  num_ele_alpha_beta_len ;
	long  QM0_len ;
	long  U0_len ;
	long  DX_len ;
	long  DY_len ;
	long  DZ_len ;
	long  DT_len ;
} c_hydro_push_vA_struct;void  c_hydro_push_vA_scmc_kernel (double *  out_vA ,double *  alpha_beta_new ,double *  alpha_beta ,double *  rho_s_vx ,double *  vA ,double *  vAzero ,long  y_cpu_core ,long  numvec ,long  XLEN ,long  YLEN ,long  ZLEN ,int  ovlp ,long  xblock ,long  yblock ,long  zblock ,int  num_ele ,int  num_ele_rho_s_vx ,int  num_ele_vA ,int  num_ele_alpha_beta ,double  QM0 ,double  U0 ,double  DX ,double  DY ,double  DZ ,double  DT ,long  yid_kernel ,long  ylen_kernel );
typedef struct { 	double *  out_alpha_beta ;
	double *  alpha_beta_new ;
	double *  alpha_beta ;
	double *  rho_s_vx ;
	double *  vA ;
	double *  vAzero ;
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
	int *  num_ele_rho_s_vx ;
	int *  num_ele_vA ;
	int *  num_ele_alpha_beta ;
	double *  QM0 ;
	double *  U0 ;
	double *  DX ;
	double *  DY ;
	double *  DZ ;
	double *  DT ;
	long  out_alpha_beta_len ;
	long  alpha_beta_new_len ;
	long  alpha_beta_len ;
	long  rho_s_vx_len ;
	long  vA_len ;
	long  vAzero_len ;
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
	long  num_ele_rho_s_vx_len ;
	long  num_ele_vA_len ;
	long  num_ele_alpha_beta_len ;
	long  QM0_len ;
	long  U0_len ;
	long  DX_len ;
	long  DY_len ;
	long  DZ_len ;
	long  DT_len ;
} c_hydro_push_jac_alpha_beta_struct;void  c_hydro_push_jac_alpha_beta_scmc_kernel (double *  out_alpha_beta ,double *  alpha_beta_new ,double *  alpha_beta ,double *  rho_s_vx ,double *  vA ,double *  vAzero ,long  y_cpu_core ,long  numvec ,long  XLEN ,long  YLEN ,long  ZLEN ,int  ovlp ,long  xblock ,long  yblock ,long  zblock ,int  num_ele ,int  num_ele_rho_s_vx ,int  num_ele_vA ,int  num_ele_alpha_beta ,double  QM0 ,double  U0 ,double  DX ,double  DY ,double  DZ ,double  DT ,long  yid_kernel ,long  ylen_kernel );
typedef struct { 	double *  out_alpha_beta ;
	double *  alpha_beta_new ;
	double *  alpha_beta ;
	double *  rho_s_vx ;
	double *  vA ;
	double *  vAzero ;
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
	int *  num_ele_rho_s_vx ;
	int *  num_ele_vA ;
	int *  num_ele_alpha_beta ;
	double *  QM0 ;
	double *  U0 ;
	double *  DX ;
	double *  DY ;
	double *  DZ ;
	double *  DT ;
	long  out_alpha_beta_len ;
	long  alpha_beta_new_len ;
	long  alpha_beta_len ;
	long  rho_s_vx_len ;
	long  vA_len ;
	long  vAzero_len ;
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
	long  num_ele_rho_s_vx_len ;
	long  num_ele_vA_len ;
	long  num_ele_alpha_beta_len ;
	long  QM0_len ;
	long  U0_len ;
	long  DX_len ;
	long  DY_len ;
	long  DZ_len ;
	long  DT_len ;
} c_hydro_push_alpha_beta_struct;void  c_hydro_push_alpha_beta_scmc_kernel (double *  out_alpha_beta ,double *  alpha_beta_new ,double *  alpha_beta ,double *  rho_s_vx ,double *  vA ,double *  vAzero ,long  y_cpu_core ,long  numvec ,long  XLEN ,long  YLEN ,long  ZLEN ,int  ovlp ,long  xblock ,long  yblock ,long  zblock ,int  num_ele ,int  num_ele_rho_s_vx ,int  num_ele_vA ,int  num_ele_alpha_beta ,double  QM0 ,double  U0 ,double  DX ,double  DY ,double  DZ ,double  DT ,long  yid_kernel ,long  ylen_kernel );
typedef struct { 	double *  out_rho_s_vx ;
	double *  alpha_beta_new ;
	double *  alpha_beta ;
	double *  rho_s_vx ;
	double *  vA ;
	double *  vAzero ;
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
	int *  num_ele_rho_s_vx ;
	int *  num_ele_vA ;
	int *  num_ele_alpha_beta ;
	double *  QM0 ;
	double *  U0 ;
	double *  DX ;
	double *  DY ;
	double *  DZ ;
	double *  DT ;
	long  out_rho_s_vx_len ;
	long  alpha_beta_new_len ;
	long  alpha_beta_len ;
	long  rho_s_vx_len ;
	long  vA_len ;
	long  vAzero_len ;
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
	long  num_ele_rho_s_vx_len ;
	long  num_ele_vA_len ;
	long  num_ele_alpha_beta_len ;
	long  QM0_len ;
	long  U0_len ;
	long  DX_len ;
	long  DY_len ;
	long  DZ_len ;
	long  DT_len ;
} c_hydro_push_vx_struct;void  c_hydro_push_vx_scmc_kernel (double *  out_rho_s_vx ,double *  alpha_beta_new ,double *  alpha_beta ,double *  rho_s_vx ,double *  vA ,double *  vAzero ,long  y_cpu_core ,long  numvec ,long  XLEN ,long  YLEN ,long  ZLEN ,int  ovlp ,long  xblock ,long  yblock ,long  zblock ,int  num_ele ,int  num_ele_rho_s_vx ,int  num_ele_vA ,int  num_ele_alpha_beta ,double  QM0 ,double  U0 ,double  DX ,double  DY ,double  DZ ,double  DT ,long  yid_kernel ,long  ylen_kernel );
typedef struct { 	double *  out_rho_s_vx ;
	double *  alpha_beta_new ;
	double *  alpha_beta ;
	double *  rho_s_vx ;
	double *  vA ;
	double *  vAzero ;
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
	int *  num_ele_rho_s_vx ;
	int *  num_ele_vA ;
	int *  num_ele_alpha_beta ;
	double *  QM0 ;
	double *  U0 ;
	double *  DX ;
	double *  DY ;
	double *  DZ ;
	double *  DT ;
	long  out_rho_s_vx_len ;
	long  alpha_beta_new_len ;
	long  alpha_beta_len ;
	long  rho_s_vx_len ;
	long  vA_len ;
	long  vAzero_len ;
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
	long  num_ele_rho_s_vx_len ;
	long  num_ele_vA_len ;
	long  num_ele_alpha_beta_len ;
	long  QM0_len ;
	long  U0_len ;
	long  DX_len ;
	long  DY_len ;
	long  DZ_len ;
	long  DT_len ;
} c_hydro_push_rho_s_struct;void  c_hydro_push_rho_s_scmc_kernel (double *  out_rho_s_vx ,double *  alpha_beta_new ,double *  alpha_beta ,double *  rho_s_vx ,double *  vA ,double *  vAzero ,long  y_cpu_core ,long  numvec ,long  XLEN ,long  YLEN ,long  ZLEN ,int  ovlp ,long  xblock ,long  yblock ,long  zblock ,int  num_ele ,int  num_ele_rho_s_vx ,int  num_ele_vA ,int  num_ele_alpha_beta ,double  QM0 ,double  U0 ,double  DX ,double  DY ,double  DZ ,double  DT ,long  yid_kernel ,long  ylen_kernel );