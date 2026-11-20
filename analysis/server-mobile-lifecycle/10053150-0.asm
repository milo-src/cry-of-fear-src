
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10053150 <.text+0x52150>:
10053150:	55                   	push   ebp
10053151:	8b ec                	mov    ebp,esp
10053153:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
10053156:	8b 08                	mov    ecx,DWORD PTR [eax]
10053158:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1005315d:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
10053163:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10053166:	89 48 18             	mov    DWORD PTR [eax+0x18],ecx
10053169:	c7 40 08 00 00 00 00 	mov    DWORD PTR [eax+0x8],0x0
10053170:	c7 40 0c ff ff ff ff 	mov    DWORD PTR [eax+0xc],0xffffffff
10053177:	c7 40 10 00 00 00 00 	mov    DWORD PTR [eax+0x10],0x0
1005317e:	c7 40 14 ff ff ff ff 	mov    DWORD PTR [eax+0x14],0xffffffff
10053185:	c7 40 1c ff ff ff ff 	mov    DWORD PTR [eax+0x1c],0xffffffff
1005318c:	c7 00 01 00 00 00    	mov    DWORD PTR [eax],0x1
10053192:	c7 40 04 00 00 00 00 	mov    DWORD PTR [eax+0x4],0x0
10053199:	c7 40 20 02 00 00 00 	mov    DWORD PTR [eax+0x20],0x2
100531a0:	c7 40 28 01 00 00 00 	mov    DWORD PTR [eax+0x28],0x1
100531a7:	b8 01 00 00 00       	mov    eax,0x1
100531ac:	5d                   	pop    ebp
100531ad:	c2 04 00             	ret    0x4
