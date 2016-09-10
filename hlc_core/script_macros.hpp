#define private		0
#define protected	1
#define public		2

#define true	1
#define false	0

#define __M_MAG(x,y)	class _xx_##x {magazine = ##x; count = ##y;}
#define __M_WEP(x,y)	class _xx_##x {weapon = ##x; count = ##y;}
#define __M_ITM(x,y)	class _xx_##x {name = ##x; count = ##y;}

#define __OPTIC_CQB opticType = 0
#define __OPTIC_DMR opticType = 1
#define __OPTIC_SNP opticType = 2

#define __ROF(rpm) reloadtime = (60/##rpm)
#define __MOA(__X) dispersion = __EVAL(__X * 0.0002909)
