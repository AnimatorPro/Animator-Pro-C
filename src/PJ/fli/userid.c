#include "fli.h"

LONG pj__fii_get_user_id(void)
{
	return(*(LONG *)"FL10"); // creator/user is Flic Library v1.0
}
