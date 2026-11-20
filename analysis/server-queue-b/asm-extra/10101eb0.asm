
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10101eb0 <.text+0x100eb0>:
10101eb0:	55                   	push   ebp
10101eb1:	8b ec                	mov    ebp,esp
10101eb3:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10101eb6:	a8 40                	test   al,0x40
10101eb8:	74 08                	je     0x10101ec2
10101eba:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10101ebd:	d9 40 08             	fld    DWORD PTR [eax+0x8]
10101ec0:	5d                   	pop    ebp
10101ec1:	c3                   	ret
10101ec2:	84 c0                	test   al,al
10101ec4:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10101ec7:	79 04                	jns    0x10101ecd
10101ec9:	d9 00                	fld    DWORD PTR [eax]
10101ecb:	5d                   	pop    ebp
10101ecc:	c3                   	ret
10101ecd:	d9 40 04             	fld    DWORD PTR [eax+0x4]
10101ed0:	5d                   	pop    ebp
10101ed1:	c3                   	ret
