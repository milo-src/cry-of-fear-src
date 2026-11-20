
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10020f20 <.text+0x1ff20>:
10020f20:	55                   	push   ebp
10020f21:	8b ec                	mov    ebp,esp
10020f23:	51                   	push   ecx
10020f24:	56                   	push   esi
10020f25:	8b f1                	mov    esi,ecx
10020f27:	8b 86 f0 03 00 00    	mov    eax,DWORD PTR [esi+0x3f0]
10020f2d:	8b 94 86 68 03 00 00 	mov    edx,DWORD PTR [esi+eax*4+0x368]
10020f34:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10020f39:	03 90 98 00 00 00    	add    edx,DWORD PTR [eax+0x98]
10020f3f:	52                   	push   edx
10020f40:	e8 7b 11 0a 00       	call   0x100c20c0
10020f45:	8b 8e f0 03 00 00    	mov    ecx,DWORD PTR [esi+0x3f0]
10020f4b:	3b 8e ec 03 00 00    	cmp    ecx,DWORD PTR [esi+0x3ec]
10020f51:	7f 6b                	jg     0x10020fbe
10020f53:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10020f58:	8b 8c 8e 68 03 00 00 	mov    ecx,DWORD PTR [esi+ecx*4+0x368]
10020f5f:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
10020f65:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10020f68:	51                   	push   ecx
10020f69:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10020f6f:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
10020f75:	83 c4 04             	add    esp,0x4
10020f78:	50                   	push   eax
10020f79:	e8 62 e4 fe ff       	call   0x1000f3e0
10020f7e:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
10020f81:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
10020f86:	83 c4 08             	add    esp,0x8
10020f89:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
10020f90:	9f                   	lahf
10020f91:	f6 c4 44             	test   ah,0x44
10020f94:	7b 18                	jnp    0x10020fae
10020f96:	8b 06                	mov    eax,DWORD PTR [esi]
10020f98:	51                   	push   ecx
10020f99:	8b ce                	mov    ecx,esi
10020f9b:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10020fa0:	ff 50 08             	call   DWORD PTR [eax+0x8]
10020fa3:	ff 86 f0 03 00 00    	inc    DWORD PTR [esi+0x3f0]
10020fa9:	5e                   	pop    esi
10020faa:	8b e5                	mov    esp,ebp
10020fac:	5d                   	pop    ebp
10020fad:	c3                   	ret
10020fae:	68 20 a1 1a 10       	push   0x101aa120
10020fb3:	6a 01                	push   0x1
10020fb5:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10020fbb:	83 c4 08             	add    esp,0x8
10020fbe:	ff 86 f0 03 00 00    	inc    DWORD PTR [esi+0x3f0]
10020fc4:	5e                   	pop    esi
10020fc5:	8b e5                	mov    esp,ebp
10020fc7:	5d                   	pop    ebp
10020fc8:	c3                   	ret
