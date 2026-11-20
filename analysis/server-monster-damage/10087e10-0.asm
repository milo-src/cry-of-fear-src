
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10087e10 <.text+0x86e10>:
10087e10:	55                   	push   ebp
10087e11:	8b ec                	mov    ebp,esp
10087e13:	83 e4 f8             	and    esp,0xfffffff8
10087e16:	83 ec 28             	sub    esp,0x28
10087e19:	56                   	push   esi
10087e1a:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10087e1d:	57                   	push   edi
10087e1e:	8b f9                	mov    edi,ecx
10087e20:	85 f6                	test   esi,esi
10087e22:	0f 84 06 02 00 00    	je     0x1008802e
10087e28:	ff b6 0c 02 00 00    	push   DWORD PTR [esi+0x20c]
10087e2e:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
10087e34:	83 c4 04             	add    esp,0x4
10087e37:	85 c0                	test   eax,eax
10087e39:	0f 84 ef 01 00 00    	je     0x1008802e
10087e3f:	8b 86 0c 02 00 00    	mov    eax,DWORD PTR [esi+0x20c]
10087e45:	85 c0                	test   eax,eax
10087e47:	75 12                	jne    0x10087e5b
10087e49:	50                   	push   eax
10087e4a:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
10087e50:	83 c4 04             	add    esp,0x4
10087e53:	85 c0                	test   eax,eax
10087e55:	0f 84 d3 01 00 00    	je     0x1008802e
10087e5b:	8b 48 7c             	mov    ecx,DWORD PTR [eax+0x7c]
10087e5e:	85 c9                	test   ecx,ecx
10087e60:	0f 84 c8 01 00 00    	je     0x1008802e
10087e66:	8b 01                	mov    eax,DWORD PTR [ecx]
10087e68:	8d 54 24 18          	lea    edx,[esp+0x18]
10087e6c:	52                   	push   edx
10087e6d:	ff 90 fc 00 00 00    	call   DWORD PTR [eax+0xfc]
10087e73:	8d 4c 24 24          	lea    ecx,[esp+0x24]
10087e77:	51                   	push   ecx
10087e78:	8b cf                	mov    ecx,edi
10087e7a:	f3 0f 10 08          	movss  xmm1,DWORD PTR [eax]
10087e7e:	f3 0f 11 4c 24 10    	movss  DWORD PTR [esp+0x10],xmm1
10087e84:	f3 0f 10 48 04       	movss  xmm1,DWORD PTR [eax+0x4]
10087e89:	f3 0f 11 4c 24 14    	movss  DWORD PTR [esp+0x14],xmm1
10087e8f:	f3 0f 10 48 08       	movss  xmm1,DWORD PTR [eax+0x8]
10087e94:	8b 07                	mov    eax,DWORD PTR [edi]
10087e96:	f3 0f 11 4c 24 18    	movss  DWORD PTR [esp+0x18],xmm1
10087e9c:	ff 90 fc 00 00 00    	call   DWORD PTR [eax+0xfc]
10087ea2:	f3 0f 10 44 24 10    	movss  xmm0,DWORD PTR [esp+0x10]
10087ea8:	0f 57 c9             	xorps  xmm1,xmm1
10087eab:	f3 0f 10 54 24 0c    	movss  xmm2,DWORD PTR [esp+0xc]
10087eb1:	f3 0f 5c c1          	subss  xmm0,xmm1
10087eb5:	f3 0f 10 5c 24 14    	movss  xmm3,DWORD PTR [esp+0x14]
10087ebb:	f3 0f 5c d1          	subss  xmm2,xmm1
10087ebf:	f3 0f 5c 1d e0 1e 1a 	subss  xmm3,DWORD PTR ds:0x101a1ee0
10087ec6:	10 
10087ec7:	f3 0f 5c 40 04       	subss  xmm0,DWORD PTR [eax+0x4]
10087ecc:	f3 0f 5c 10          	subss  xmm2,DWORD PTR [eax]
10087ed0:	f3 0f 5c 58 08       	subss  xmm3,DWORD PTR [eax+0x8]
10087ed5:	0f 28 c8             	movaps xmm1,xmm0
10087ed8:	f3 0f 11 44 24 10    	movss  DWORD PTR [esp+0x10],xmm0
10087ede:	f3 0f 59 c8          	mulss  xmm1,xmm0
10087ee2:	0f 28 c2             	movaps xmm0,xmm2
10087ee5:	f3 0f 59 c2          	mulss  xmm0,xmm2
10087ee9:	f3 0f 11 54 24 0c    	movss  DWORD PTR [esp+0xc],xmm2
10087eef:	f3 0f 11 5c 24 14    	movss  DWORD PTR [esp+0x14],xmm3
10087ef5:	f3 0f 58 c8          	addss  xmm1,xmm0
10087ef9:	0f 28 c3             	movaps xmm0,xmm3
10087efc:	f3 0f 59 c3          	mulss  xmm0,xmm3
10087f00:	f3 0f 58 c8          	addss  xmm1,xmm0
10087f04:	0f 5a c1             	cvtps2pd xmm0,xmm1
10087f07:	0f 57 c9             	xorps  xmm1,xmm1
10087f0a:	66 0f 2e c8          	ucomisd xmm1,xmm0
10087f0e:	77 06                	ja     0x10087f16
10087f10:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
10087f14:	eb 05                	jmp    0x10087f1b
10087f16:	e8 75 3f 0e 00       	call   0x1016be90
10087f1b:	0f 57 c9             	xorps  xmm1,xmm1
10087f1e:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
10087f22:	0f 57 c0             	xorps  xmm0,xmm0
10087f25:	0f 2e c8             	ucomiss xmm1,xmm0
10087f28:	9f                   	lahf
10087f29:	f6 c4 44             	test   ah,0x44
10087f2c:	7a 10                	jp     0x10087f3e
10087f2e:	f3 0f 10 25 90 13 1a 	movss  xmm4,DWORD PTR ds:0x101a1390
10087f35:	10 
10087f36:	0f 57 d2             	xorps  xmm2,xmm2
10087f39:	0f 57 db             	xorps  xmm3,xmm3
10087f3c:	eb 2a                	jmp    0x10087f68
10087f3e:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
10087f45:	10 
10087f46:	f3 0f 5e c1          	divss  xmm0,xmm1
10087f4a:	f3 0f 10 54 24 0c    	movss  xmm2,DWORD PTR [esp+0xc]
10087f50:	f3 0f 10 5c 24 10    	movss  xmm3,DWORD PTR [esp+0x10]
10087f56:	f3 0f 10 64 24 14    	movss  xmm4,DWORD PTR [esp+0x14]
10087f5c:	f3 0f 59 d0          	mulss  xmm2,xmm0
10087f60:	f3 0f 59 d8          	mulss  xmm3,xmm0
10087f64:	f3 0f 59 e0          	mulss  xmm4,xmm0
10087f68:	0f 28 cb             	movaps xmm1,xmm3
10087f6b:	f3 0f 11 64 24 14    	movss  DWORD PTR [esp+0x14],xmm4
10087f71:	0f 28 c2             	movaps xmm0,xmm2
10087f74:	f3 0f 59 cb          	mulss  xmm1,xmm3
10087f78:	f3 0f 59 c2          	mulss  xmm0,xmm2
10087f7c:	f3 0f 11 5c 24 10    	movss  DWORD PTR [esp+0x10],xmm3
10087f82:	f3 0f 11 54 24 0c    	movss  DWORD PTR [esp+0xc],xmm2
10087f88:	f3 0f 58 c8          	addss  xmm1,xmm0
10087f8c:	0f 28 c4             	movaps xmm0,xmm4
10087f8f:	f3 0f 59 c4          	mulss  xmm0,xmm4
10087f93:	f3 0f 58 c8          	addss  xmm1,xmm0
10087f97:	0f 5a c1             	cvtps2pd xmm0,xmm1
10087f9a:	0f 57 c9             	xorps  xmm1,xmm1
10087f9d:	66 0f 2e c8          	ucomisd xmm1,xmm0
10087fa1:	77 06                	ja     0x10087fa9
10087fa3:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
10087fa7:	eb 05                	jmp    0x10087fae
10087fa9:	e8 e2 3e 0e 00       	call   0x1016be90
10087fae:	0f 57 c9             	xorps  xmm1,xmm1
10087fb1:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
10087fb5:	0f 57 c0             	xorps  xmm0,xmm0
10087fb8:	0f 2e c8             	ucomiss xmm1,xmm0
10087fbb:	9f                   	lahf
10087fbc:	f6 c4 44             	test   ah,0x44
10087fbf:	7a 1a                	jp     0x10087fdb
10087fc1:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
10087fc8:	00 
10087fc9:	c7 44 24 1c 00 00 00 	mov    DWORD PTR [esp+0x1c],0x0
10087fd0:	00 
10087fd1:	c7 44 24 20 00 00 80 	mov    DWORD PTR [esp+0x20],0x3f800000
10087fd8:	3f 
10087fd9:	eb 3c                	jmp    0x10088017
10087fdb:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
10087fe2:	10 
10087fe3:	f3 0f 5e c1          	divss  xmm0,xmm1
10087fe7:	f3 0f 10 4c 24 0c    	movss  xmm1,DWORD PTR [esp+0xc]
10087fed:	f3 0f 59 c8          	mulss  xmm1,xmm0
10087ff1:	f3 0f 11 4c 24 18    	movss  DWORD PTR [esp+0x18],xmm1
10087ff7:	f3 0f 10 4c 24 10    	movss  xmm1,DWORD PTR [esp+0x10]
10087ffd:	f3 0f 59 c8          	mulss  xmm1,xmm0
10088001:	f3 0f 11 4c 24 1c    	movss  DWORD PTR [esp+0x1c],xmm1
10088007:	f3 0f 10 4c 24 14    	movss  xmm1,DWORD PTR [esp+0x14]
1008800d:	f3 0f 59 c8          	mulss  xmm1,xmm0
10088011:	f3 0f 11 4c 24 20    	movss  DWORD PTR [esp+0x20],xmm1
10088017:	f3 0f 7e 44 24 18    	movq   xmm0,QWORD PTR [esp+0x18]
1008801d:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
10088021:	66 0f d6 05 28 2f 22 	movq   QWORD PTR ds:0x10222f28,xmm0
10088028:	10 
10088029:	a3 30 2f 22 10       	mov    ds:0x10222f30,eax
1008802e:	f7 45 14 61 02 00 00 	test   DWORD PTR [ebp+0x14],0x261
10088035:	74 53                	je     0x1008808a
10088037:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008803a:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
1008803f:	f3 0f 10 88 64 01 00 	movss  xmm1,DWORD PTR [eax+0x164]
10088046:	00 
10088047:	0f 2f c1             	comiss xmm0,xmm1
1008804a:	72 20                	jb     0x1008806c
1008804c:	c7 80 64 01 00 00 00 	mov    DWORD PTR [eax+0x164],0xc2480000
10088053:	00 48 c2 
10088056:	8b cf                	mov    ecx,edi
10088058:	8b 07                	mov    eax,DWORD PTR [edi]
1008805a:	6a 02                	push   0x2
1008805c:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1008805f:	ff 50 6c             	call   DWORD PTR [eax+0x6c]
10088062:	33 c0                	xor    eax,eax
10088064:	5f                   	pop    edi
10088065:	5e                   	pop    esi
10088066:	8b e5                	mov    esp,ebp
10088068:	5d                   	pop    ebp
10088069:	c2 10 00             	ret    0x10
1008806c:	0f 5a c0             	cvtps2pd xmm0,xmm0
1008806f:	0f 5a c9             	cvtps2pd xmm1,xmm1
10088072:	f2 0f 59 05 f8 1d 1a 	mulsd  xmm0,QWORD PTR ds:0x101a1df8
10088079:	10 
1008807a:	f2 0f 5c c8          	subsd  xmm1,xmm0
1008807e:	66 0f 5a c1          	cvtpd2ps xmm0,xmm1
10088082:	f3 0f 11 80 64 01 00 	movss  DWORD PTR [eax+0x164],xmm0
10088089:	00 
1008808a:	5f                   	pop    edi
1008808b:	b8 01 00 00 00       	mov    eax,0x1
10088090:	5e                   	pop    esi
10088091:	8b e5                	mov    esp,ebp
10088093:	5d                   	pop    ebp
10088094:	c2 10 00             	ret    0x10
