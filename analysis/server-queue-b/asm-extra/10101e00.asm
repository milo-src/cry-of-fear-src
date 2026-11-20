
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10101e00 <.text+0x100e00>:
10101e00:	55                   	push   ebp
10101e01:	8b ec                	mov    ebp,esp
10101e03:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10101e06:	83 ec 0c             	sub    esp,0xc
10101e09:	f3 0f 10 41 44       	movss  xmm0,DWORD PTR [ecx+0x44]
10101e0e:	0f 2e 05 34 2f 22 10 	ucomiss xmm0,DWORD PTR ds:0x10222f34
10101e15:	9f                   	lahf
10101e16:	f6 c4 44             	test   ah,0x44
10101e19:	0f 8a 8b 00 00 00    	jp     0x10101eaa
10101e1f:	f3 0f 10 41 48       	movss  xmm0,DWORD PTR [ecx+0x48]
10101e24:	0f 2e 05 38 2f 22 10 	ucomiss xmm0,DWORD PTR ds:0x10222f38
10101e2b:	9f                   	lahf
10101e2c:	f6 c4 44             	test   ah,0x44
10101e2f:	7a 79                	jp     0x10101eaa
10101e31:	f3 0f 10 41 4c       	movss  xmm0,DWORD PTR [ecx+0x4c]
10101e36:	0f 2e 05 3c 2f 22 10 	ucomiss xmm0,DWORD PTR ds:0x10222f3c
10101e3d:	9f                   	lahf
10101e3e:	f6 c4 44             	test   ah,0x44
10101e41:	7a 67                	jp     0x10101eaa
10101e43:	8b 81 a4 01 00 00    	mov    eax,DWORD PTR [ecx+0x1a4]
10101e49:	a8 40                	test   al,0x40
10101e4b:	74 1c                	je     0x10101e69
10101e4d:	0f 57 c0             	xorps  xmm0,xmm0
10101e50:	c7 45 fc 00 00 80 3f 	mov    DWORD PTR [ebp-0x4],0x3f800000
10101e57:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
10101e5a:	0f 14 c0             	unpcklps xmm0,xmm0
10101e5d:	66 0f d6 41 44       	movq   QWORD PTR [ecx+0x44],xmm0
10101e62:	89 41 4c             	mov    DWORD PTR [ecx+0x4c],eax
10101e65:	8b e5                	mov    esp,ebp
10101e67:	5d                   	pop    ebp
10101e68:	c3                   	ret
10101e69:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
10101e70:	84 c0                	test   al,al
10101e72:	79 1d                	jns    0x10101e91
10101e74:	f3 0f 10 0d 90 13 1a 	movss  xmm1,DWORD PTR ds:0x101a1390
10101e7b:	10 
10101e7c:	0f 57 c0             	xorps  xmm0,xmm0
10101e7f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
10101e82:	0f 14 c8             	unpcklps xmm1,xmm0
10101e85:	66 0f d6 49 44       	movq   QWORD PTR [ecx+0x44],xmm1
10101e8a:	89 41 4c             	mov    DWORD PTR [ecx+0x4c],eax
10101e8d:	8b e5                	mov    esp,ebp
10101e8f:	5d                   	pop    ebp
10101e90:	c3                   	ret
10101e91:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
10101e98:	10 
10101e99:	0f 57 c9             	xorps  xmm1,xmm1
10101e9c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
10101e9f:	0f 14 c8             	unpcklps xmm1,xmm0
10101ea2:	66 0f d6 49 44       	movq   QWORD PTR [ecx+0x44],xmm1
10101ea7:	89 41 4c             	mov    DWORD PTR [ecx+0x4c],eax
10101eaa:	8b e5                	mov    esp,ebp
10101eac:	5d                   	pop    ebp
10101ead:	c3                   	ret
