#include"str.h"

void str_trim_crlf(char *str)//ÌŞ³ı×Ö·û´®ÖĞµÄ¿Õ¸ñÓë»»ĞĞ
{
	assert(str != NULL);
	char *p = str + (strlen(str)-1);
	while(*p=='\n' || *p=='\r')
		*p-- = '\0';
}

void str_split(const char *str, char *left, char *right, char c)//·Ö¸î×Ö·û´®(Î´È¥³ı¿Õ¸ñ)
{
	assert(str != NULL);
	char *pos = strchr(str, c);
	if(pos == NULL)
		strcpy(left, str);
	else
	{
		strncpy(left, str, pos-str);
		strcpy(right, pos+1);
	}
}

void str_upper(char *str)//×Ö·û´®Ğ¡Ğ´×ª´óĞ´(·ÇĞ¡Ğ´×Ö·û²»´¦Àí)
{
	while(*str)
	{
		if(*str>='a' && *str<='z')
			*str -= 32;
		str++;
	}
}