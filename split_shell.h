
#include "pubdefs.h"
double  wclk_now ();
;
int  split_1st_all_passes (Particle_in_Cell_MPI *  pthis ,double  dt0 ,int  use_vlo )
;
int  pass_GeqB (Particle_in_Cell_MPI *  pthis ,double  deltat )
;
int  FDTD_2_4th_ALL_passes (Particle_in_Cell_MPI *  pthis ,double  dt0 )
;
int  FDTD_2_2th_ALL_passes (Particle_in_Cell_MPI *  pthis ,double  dt0 )
;
int  ITG_split_2nd_all_passes_enecons (Particle_in_Cell_MPI *  pthis ,Field3D_MPI *  pext_rho_dist ,double  dt0 ,double  moqe ,double  ne0 ,int  use_vlo ,int  use_gc )
;
int  ITG_split_2nd_all_passes (Particle_in_Cell_MPI *  pthis ,Field3D_MPI *  pext_rho_dist ,double  dt0 ,double  moqe ,double  ne0 ,int  use_vlo ,int  use_gc )
;
int  split_multi_step_passes_test (Particle_in_Cell_MPI *  pthis ,double  dt0 ,int  N_electron ,int  N_maxwell ,double *  pmass ,double *  pchg )
;
int  split_2nd_all_passes_multi_step (Particle_in_Cell_MPI *  pthis ,double  dt0 ,int  use_vlo ,int  use_ext_G_E ,int  N_maxwell ,int  N_electron ,double *  pmass ,double *  pchg )
;
int  split_2nd_all_passes (Particle_in_Cell_MPI *  pthis ,double  dt0 ,int  use_vlo ,int  use_ext_G_E )
;
int  split_small_timestep (Particle_in_Cell_MPI *  pthis ,double  dt0 ,double *  pmass ,double *  pcharge ,int  N_l ,int  N_M ,int  push_J )
;
