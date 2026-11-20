
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1010f330 <.text+0x10e330>:
1010f330:	55                   	push   ebp
1010f331:	8b ec                	mov    ebp,esp
1010f333:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
1010f336:	8b 90 d4 01 00 00    	mov    edx,DWORD PTR [eax+0x1d4]
1010f33c:	85 d2                	test   edx,edx
1010f33e:	74 24                	je     0x1010f364
1010f340:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1010f345:	51                   	push   ecx
1010f346:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1010f34d:	6a 03                	push   0x3
1010f34f:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1010f355:	51                   	push   ecx
1010f356:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1010f359:	03 c2                	add    eax,edx
1010f35b:	50                   	push   eax
1010f35c:	e8 8f 2c ff ff       	call   0x10101ff0
1010f361:	83 c4 14             	add    esp,0x14
1010f364:	5d                   	pop    ebp
1010f365:	c2 04 00             	ret    0x4
