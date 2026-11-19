
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\client.dll:     file format pei-i386


Disassembly of section .text:

10011eb0 <.text+0x10eb0>:
10011eb0:	55                   	push   ebp
10011eb1:	8b ec                	mov    ebp,esp
10011eb3:	8b 0d e8 d6 1a 10    	mov    ecx,DWORD PTR ds:0x101ad6e8
10011eb9:	83 ec 08             	sub    esp,0x8
10011ebc:	83 b9 d0 00 00 00 00 	cmp    DWORD PTR [ecx+0xd0],0x0
10011ec3:	74 10                	je     0x10011ed5
10011ec5:	c7 81 3c 02 00 00 00 	mov    DWORD PTR [ecx+0x23c],0x44278000
10011ecc:	80 27 44 
10011ecf:	8b 0d e8 d6 1a 10    	mov    ecx,DWORD PTR ds:0x101ad6e8
10011ed5:	8d 81 f4 f3 04 00    	lea    eax,[ecx+0x4f3f4]
10011edb:	68 e4 ed 13 10       	push   0x1013ede4
10011ee0:	50                   	push   eax
10011ee1:	8b 81 58 f5 04 00    	mov    eax,DWORD PTR [ecx+0x4f558]
10011ee7:	ff d0                	call   eax
10011ee9:	50                   	push   eax
10011eea:	e8 ad 7b 0e 00       	call   0x100f9a9c
10011eef:	83 c4 0c             	add    esp,0xc
10011ef2:	83 f8 02             	cmp    eax,0x2
10011ef5:	75 0f                	jne    0x10011f06
10011ef7:	a1 e8 d6 1a 10       	mov    eax,ds:0x101ad6e8
10011efc:	c7 80 34 02 00 00 00 	mov    DWORD PTR [eax+0x234],0x44278000
10011f03:	80 27 44 
10011f06:	56                   	push   esi
10011f07:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10011f0a:	56                   	push   esi
10011f0b:	e8 10 dd ff ff       	call   0x1000fc20
10011f10:	dd 5d f8             	fstp   QWORD PTR [ebp-0x8]
10011f13:	f2 0f 10 45 f8       	movsd  xmm0,QWORD PTR [ebp-0x8]
10011f18:	83 c4 04             	add    esp,0x4
10011f1b:	66 0f 2f 05 30 ee 13 	comisd xmm0,QWORD PTR ds:0x1013ee30
10011f22:	10 
10011f23:	77 29                	ja     0x10011f4e
10011f25:	a1 e8 d6 1a 10       	mov    eax,ds:0x101ad6e8
10011f2a:	05 34 02 00 00       	add    eax,0x234
10011f2f:	50                   	push   eax
10011f30:	e8 eb dc ff ff       	call   0x1000fc20
10011f35:	dd 5d f8             	fstp   QWORD PTR [ebp-0x8]
10011f38:	f2 0f 10 45 f8       	movsd  xmm0,QWORD PTR [ebp-0x8]
10011f3d:	83 c4 04             	add    esp,0x4
10011f40:	66 0f 2f 05 30 ee 13 	comisd xmm0,QWORD PTR ds:0x1013ee30
10011f47:	10 
10011f48:	0f 86 ee 00 00 00    	jbe    0x1001203c
10011f4e:	8b 0d e8 d6 1a 10    	mov    ecx,DWORD PTR ds:0x101ad6e8
10011f54:	56                   	push   esi
10011f55:	f3 0f 10 41 10       	movss  xmm0,DWORD PTR [ecx+0x10]
10011f5a:	8d 81 34 02 00 00    	lea    eax,[ecx+0x234]
10011f60:	50                   	push   eax
10011f61:	51                   	push   ecx
10011f62:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10011f67:	56                   	push   esi
10011f68:	e8 b3 df ff ff       	call   0x1000ff20
10011f6d:	a1 e8 d6 1a 10       	mov    eax,ds:0x101ad6e8
10011f72:	83 c4 10             	add    esp,0x10
10011f75:	f3 0f 10 0d f0 cc 13 	movss  xmm1,DWORD PTR ds:0x1013ccf0
10011f7c:	10 
10011f7d:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
10011f82:	8d 88 34 02 00 00    	lea    ecx,[eax+0x234]
10011f88:	f3 0f 59 05 24 ef 13 	mulss  xmm0,DWORD PTR ds:0x1013ef24
10011f8f:	10 
10011f90:	51                   	push   ecx
10011f91:	51                   	push   ecx
10011f92:	f3 0f 5c c8          	subss  xmm1,xmm0
10011f96:	0f 57 c0             	xorps  xmm0,xmm0
10011f99:	f3 0f 5f c1          	maxss  xmm0,xmm1
10011f9d:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10011fa2:	51                   	push   ecx
10011fa3:	e8 38 e1 ff ff       	call   0x100100e0
10011fa8:	a1 e8 d6 1a 10       	mov    eax,ds:0x101ad6e8
10011fad:	0f 57 c9             	xorps  xmm1,xmm1
10011fb0:	83 c4 0c             	add    esp,0xc
10011fb3:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
10011fb8:	8d 88 34 02 00 00    	lea    ecx,[eax+0x234]
10011fbe:	f3 0f 59 05 50 ef 13 	mulss  xmm0,DWORD PTR ds:0x1013ef50
10011fc5:	10 
10011fc6:	51                   	push   ecx
10011fc7:	56                   	push   esi
10011fc8:	51                   	push   ecx
10011fc9:	f3 0f 5f c8          	maxss  xmm1,xmm0
10011fcd:	f3 0f 10 05 e0 e3 13 	movss  xmm0,DWORD PTR ds:0x1013e3e0
10011fd4:	10 
10011fd5:	f3 0f 5d c1          	minss  xmm0,xmm1
10011fd9:	0f 57 05 30 e4 13 10 	xorps  xmm0,XMMWORD PTR ds:0x1013e430
10011fe0:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10011fe5:	51                   	push   ecx
10011fe6:	e8 35 df ff ff       	call   0x1000ff20
10011feb:	f3 0f 10 1d b4 ef 13 	movss  xmm3,DWORD PTR ds:0x1013efb4
10011ff2:	10 
10011ff3:	83 c4 10             	add    esp,0x10
10011ff6:	f3 0f 10 15 60 ef 13 	movss  xmm2,DWORD PTR ds:0x1013ef60
10011ffd:	10 
10011ffe:	0f 28 cb             	movaps xmm1,xmm3
10012001:	f3 0f 5f 0e          	maxss  xmm1,DWORD PTR [esi]
10012005:	f3 0f 5f 5e 08       	maxss  xmm3,DWORD PTR [esi+0x8]
1001200a:	0f 28 c2             	movaps xmm0,xmm2
1001200d:	f3 0f 5d c1          	minss  xmm0,xmm1
10012011:	f3 0f 10 0d bc ef 13 	movss  xmm1,DWORD PTR ds:0x1013efbc
10012018:	10 
10012019:	f3 0f 5f 4e 04       	maxss  xmm1,DWORD PTR [esi+0x4]
1001201e:	f3 0f 5d d3          	minss  xmm2,xmm3
10012022:	f3 0f 11 06          	movss  DWORD PTR [esi],xmm0
10012026:	f3 0f 10 05 68 ef 13 	movss  xmm0,DWORD PTR ds:0x1013ef68
1001202d:	10 
1001202e:	f3 0f 5d c1          	minss  xmm0,xmm1
10012032:	f3 0f 11 56 08       	movss  DWORD PTR [esi+0x8],xmm2
10012037:	f3 0f 11 46 04       	movss  DWORD PTR [esi+0x4],xmm0
1001203c:	5e                   	pop    esi
1001203d:	8b e5                	mov    esp,ebp
1001203f:	5d                   	pop    ebp
10012040:	c3                   	ret
