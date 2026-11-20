
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10101dc0 <.text+0x100dc0>:
10101dc0:	55                   	push   ebp
10101dc1:	8b ec                	mov    ebp,esp
10101dc3:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10101dc6:	a8 40                	test   al,0x40
10101dc8:	74 0e                	je     0x10101dd8
10101dca:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10101dcd:	d9 40 08             	fld    DWORD PTR [eax+0x8]
10101dd0:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
10101dd3:	d8 60 08             	fsub   DWORD PTR [eax+0x8]
10101dd6:	5d                   	pop    ebp
10101dd7:	c3                   	ret
10101dd8:	84 c0                	test   al,al
10101dda:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10101ddd:	79 09                	jns    0x10101de8
10101ddf:	d9 00                	fld    DWORD PTR [eax]
10101de1:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
10101de4:	d8 20                	fsub   DWORD PTR [eax]
10101de6:	5d                   	pop    ebp
10101de7:	c3                   	ret
10101de8:	d9 40 04             	fld    DWORD PTR [eax+0x4]
10101deb:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
10101dee:	d8 60 04             	fsub   DWORD PTR [eax+0x4]
10101df1:	5d                   	pop    ebp
10101df2:	c3                   	ret
