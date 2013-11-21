/*
    libxmind mockup
    Copyright (C) 2013 Oleksiy Protas
    
    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include <zip.h>

int main()
{
	int err=0; zip_int64_t i;

	struct zip *zp=zip_open("weekplan.xmind",0,&err);

	for (i=0;i<zip_get_num_entries(zp,0);i++)
	{
		printf("File #%d is named %s\n",(int)i,zip_get_name(zp,i,ZIP_FL_ENC_GUESS));
	}

	zip_close(zp);

	return 0;
}
