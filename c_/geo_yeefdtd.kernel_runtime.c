#include <stdio.h>
#include <stdlib.h>
#include "local_header.h"
#include "c_pscmc_inc.h"
#include "geo_yeefdtd.kernel_inc.h"
int  c_YEE_CURL_R_init (c_pscmc_env *  pe ,c_YEE_CURL_R_struct *  kerstr ){
	return  0 ;}
void  c_YEE_CURL_R_get_struct_len (size_t *  len ){
((len)[0] = sizeof(c_YEE_CURL_R_struct ));
}
int  c_YEE_CURL_R_get_xlen (){
	return  IDX_OPT_MAX ;}
int  c_YEE_CURL_R_get_num_compute_units (c_YEE_CURL_R_struct *  kerstr ){
	return  1 ;}
int  c_YEE_CURL_R_exec (c_YEE_CURL_R_struct *  kerstr ,long  scmc_internal_g_xlen ,long  scmc_internal_g_ylen ){
{
	int  yid ;
	int  numt = 1 ;
	int  tid = 0 ;
	int  ysingle = 	(  	(  scmc_internal_g_ylen + 	(  numt - 1 ) ) / numt ) ;
	int  ymin = 	(  tid * ysingle ) ;
	int  ymax = 	(  	(  1 + tid ) * ysingle ) ;
	for ((yid = ymin) ; 	(  	(  yid < ymax ) && 	(  yid < scmc_internal_g_ylen ) ) ; (yid = 	(  yid + 1 )))
	{
	c_YEE_CURL_R_scmc_kernel ( 	( kerstr )->inoutE1 , 	( kerstr )->inB0 , 	( kerstr )->xoffset , 	( kerstr )->yoffset , 	( kerstr )->zoffset , (	( kerstr )->y_cpu_core)[0] , (	( kerstr )->numvec)[0] , (	( kerstr )->XLEN)[0] , (	( kerstr )->YLEN)[0] , (	( kerstr )->ZLEN)[0] , (	( kerstr )->ovlp)[0] , (	( kerstr )->xblock)[0] , (	( kerstr )->yblock)[0] , (	( kerstr )->zblock)[0] , (	( kerstr )->num_ele)[0] , (	( kerstr )->DT)[0] , yid , scmc_internal_g_ylen );
}}	return  0 ;}
int  c_YEE_CURL_R_scmc_set_parameter_inoutE1 (c_YEE_CURL_R_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->inoutE1 = pm->d_data);
}
int  c_YEE_CURL_R_scmc_set_parameter_inB0 (c_YEE_CURL_R_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->inB0 = pm->d_data);
}
int  c_YEE_CURL_R_scmc_set_parameter_xoffset (c_YEE_CURL_R_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->xoffset = pm->d_data);
}
int  c_YEE_CURL_R_scmc_set_parameter_yoffset (c_YEE_CURL_R_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->yoffset = pm->d_data);
}
int  c_YEE_CURL_R_scmc_set_parameter_zoffset (c_YEE_CURL_R_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->zoffset = pm->d_data);
}
int  c_YEE_CURL_R_scmc_set_parameter_y_cpu_core (c_YEE_CURL_R_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->y_cpu_core = pm->d_data);
}
int  c_YEE_CURL_R_scmc_set_parameter_numvec (c_YEE_CURL_R_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->numvec = pm->d_data);
}
int  c_YEE_CURL_R_scmc_set_parameter_XLEN (c_YEE_CURL_R_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->XLEN = pm->d_data);
}
int  c_YEE_CURL_R_scmc_set_parameter_YLEN (c_YEE_CURL_R_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->YLEN = pm->d_data);
}
int  c_YEE_CURL_R_scmc_set_parameter_ZLEN (c_YEE_CURL_R_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->ZLEN = pm->d_data);
}
int  c_YEE_CURL_R_scmc_set_parameter_ovlp (c_YEE_CURL_R_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->ovlp = pm->d_data);
}
int  c_YEE_CURL_R_scmc_set_parameter_xblock (c_YEE_CURL_R_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->xblock = pm->d_data);
}
int  c_YEE_CURL_R_scmc_set_parameter_yblock (c_YEE_CURL_R_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->yblock = pm->d_data);
}
int  c_YEE_CURL_R_scmc_set_parameter_zblock (c_YEE_CURL_R_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->zblock = pm->d_data);
}
int  c_YEE_CURL_R_scmc_set_parameter_num_ele (c_YEE_CURL_R_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->num_ele = pm->d_data);
}
int  c_YEE_CURL_R_scmc_set_parameter_DT (c_YEE_CURL_R_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->DT = pm->d_data);
}
int  c_GEO_YEE_CURL_L_init (c_pscmc_env *  pe ,c_GEO_YEE_CURL_L_struct *  kerstr ){
	return  0 ;}
void  c_GEO_YEE_CURL_L_get_struct_len (size_t *  len ){
((len)[0] = sizeof(c_GEO_YEE_CURL_L_struct ));
}
int  c_GEO_YEE_CURL_L_get_xlen (){
	return  IDX_OPT_MAX ;}
int  c_GEO_YEE_CURL_L_get_num_compute_units (c_GEO_YEE_CURL_L_struct *  kerstr ){
	return  1 ;}
int  c_GEO_YEE_CURL_L_exec (c_GEO_YEE_CURL_L_struct *  kerstr ,long  scmc_internal_g_xlen ,long  scmc_internal_g_ylen ){
{
	int  yid ;
	int  numt = 1 ;
	int  tid = 0 ;
	int  ysingle = 	(  	(  scmc_internal_g_ylen + 	(  numt - 1 ) ) / numt ) ;
	int  ymin = 	(  tid * ysingle ) ;
	int  ymax = 	(  	(  1 + tid ) * ysingle ) ;
	for ((yid = ymin) ; 	(  	(  yid < ymax ) && 	(  yid < scmc_internal_g_ylen ) ) ; (yid = 	(  yid + 1 )))
	{
	c_GEO_YEE_CURL_L_scmc_kernel ( 	( kerstr )->inoutE1 , 	( kerstr )->inB0 , 	( kerstr )->xoffset , 	( kerstr )->yoffset , 	( kerstr )->zoffset , (	( kerstr )->y_cpu_core)[0] , (	( kerstr )->numvec)[0] , (	( kerstr )->XLEN)[0] , (	( kerstr )->YLEN)[0] , (	( kerstr )->ZLEN)[0] , (	( kerstr )->ovlp)[0] , (	( kerstr )->xblock)[0] , (	( kerstr )->yblock)[0] , (	( kerstr )->zblock)[0] , (	( kerstr )->num_ele)[0] , (	( kerstr )->DT)[0] , (	( kerstr )->DELTA_Z)[0] , (	( kerstr )->DELTA_Y)[0] , (	( kerstr )->DELTA_X)[0] , (	( kerstr )->x0)[0] , yid , scmc_internal_g_ylen );
}}	return  0 ;}
int  c_GEO_YEE_CURL_L_scmc_set_parameter_inoutE1 (c_GEO_YEE_CURL_L_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->inoutE1 = pm->d_data);
}
int  c_GEO_YEE_CURL_L_scmc_set_parameter_inB0 (c_GEO_YEE_CURL_L_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->inB0 = pm->d_data);
}
int  c_GEO_YEE_CURL_L_scmc_set_parameter_xoffset (c_GEO_YEE_CURL_L_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->xoffset = pm->d_data);
}
int  c_GEO_YEE_CURL_L_scmc_set_parameter_yoffset (c_GEO_YEE_CURL_L_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->yoffset = pm->d_data);
}
int  c_GEO_YEE_CURL_L_scmc_set_parameter_zoffset (c_GEO_YEE_CURL_L_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->zoffset = pm->d_data);
}
int  c_GEO_YEE_CURL_L_scmc_set_parameter_y_cpu_core (c_GEO_YEE_CURL_L_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->y_cpu_core = pm->d_data);
}
int  c_GEO_YEE_CURL_L_scmc_set_parameter_numvec (c_GEO_YEE_CURL_L_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->numvec = pm->d_data);
}
int  c_GEO_YEE_CURL_L_scmc_set_parameter_XLEN (c_GEO_YEE_CURL_L_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->XLEN = pm->d_data);
}
int  c_GEO_YEE_CURL_L_scmc_set_parameter_YLEN (c_GEO_YEE_CURL_L_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->YLEN = pm->d_data);
}
int  c_GEO_YEE_CURL_L_scmc_set_parameter_ZLEN (c_GEO_YEE_CURL_L_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->ZLEN = pm->d_data);
}
int  c_GEO_YEE_CURL_L_scmc_set_parameter_ovlp (c_GEO_YEE_CURL_L_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->ovlp = pm->d_data);
}
int  c_GEO_YEE_CURL_L_scmc_set_parameter_xblock (c_GEO_YEE_CURL_L_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->xblock = pm->d_data);
}
int  c_GEO_YEE_CURL_L_scmc_set_parameter_yblock (c_GEO_YEE_CURL_L_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->yblock = pm->d_data);
}
int  c_GEO_YEE_CURL_L_scmc_set_parameter_zblock (c_GEO_YEE_CURL_L_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->zblock = pm->d_data);
}
int  c_GEO_YEE_CURL_L_scmc_set_parameter_num_ele (c_GEO_YEE_CURL_L_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->num_ele = pm->d_data);
}
int  c_GEO_YEE_CURL_L_scmc_set_parameter_DT (c_GEO_YEE_CURL_L_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->DT = pm->d_data);
}
int  c_GEO_YEE_CURL_L_scmc_set_parameter_DELTA_Z (c_GEO_YEE_CURL_L_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->DELTA_Z = pm->d_data);
}
int  c_GEO_YEE_CURL_L_scmc_set_parameter_DELTA_Y (c_GEO_YEE_CURL_L_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->DELTA_Y = pm->d_data);
}
int  c_GEO_YEE_CURL_L_scmc_set_parameter_DELTA_X (c_GEO_YEE_CURL_L_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->DELTA_X = pm->d_data);
}
int  c_GEO_YEE_CURL_L_scmc_set_parameter_x0 (c_GEO_YEE_CURL_L_struct *  kerstr ,c_pscmc_mem *  pm ){
(	( kerstr )->x0 = pm->d_data);
}
