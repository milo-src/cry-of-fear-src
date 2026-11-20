
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10002ef0 <.text+0x1ef0>:
10002ef0:	55                   	push   ebp
10002ef1:	8b ec                	mov    ebp,esp
10002ef3:	56                   	push   esi
10002ef4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10002ef7:	57                   	push   edi
10002ef8:	56                   	push   esi
10002ef9:	e8 42 01 00 00       	call   0x10003040
10002efe:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
10002f01:	57                   	push   edi
10002f02:	e8 39 01 00 00       	call   0x10003040
10002f07:	f3 0f 10 26          	movss  xmm4,DWORD PTR [esi]
10002f0b:	83 c4 08             	add    esp,0x8
10002f0e:	f3 0f 10 07          	movss  xmm0,DWORD PTR [edi]
10002f12:	f3 0f 10 2d c4 13 1a 	movss  xmm5,DWORD PTR ds:0x101a13c4
10002f19:	10 
10002f1a:	f3 0f 5c c4          	subss  xmm0,xmm4
10002f1e:	f3 0f 10 0d cc 13 1a 	movss  xmm1,DWORD PTR ds:0x101a13cc
10002f25:	10 
10002f26:	f3 0f 10 15 d4 13 1a 	movss  xmm2,DWORD PTR ds:0x101a13d4
10002f2d:	10 
10002f2e:	0f 2f c5             	comiss xmm0,xmm5
10002f31:	76 06                	jbe    0x10002f39
10002f33:	f3 0f 5c c1          	subss  xmm0,xmm1
10002f37:	eb 09                	jmp    0x10002f42
10002f39:	0f 2f d0             	comiss xmm2,xmm0
10002f3c:	76 04                	jbe    0x10002f42
10002f3e:	f3 0f 58 c1          	addss  xmm0,xmm1
10002f42:	f3 0f 10 5d 14       	movss  xmm3,DWORD PTR [ebp+0x14]
10002f47:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
10002f4a:	f3 0f 59 c3          	mulss  xmm0,xmm3
10002f4e:	f3 0f 58 c4          	addss  xmm0,xmm4
10002f52:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
10002f56:	f3 0f 10 66 04       	movss  xmm4,DWORD PTR [esi+0x4]
10002f5b:	f3 0f 10 47 04       	movss  xmm0,DWORD PTR [edi+0x4]
10002f60:	f3 0f 5c c4          	subss  xmm0,xmm4
10002f64:	0f 2f c5             	comiss xmm0,xmm5
10002f67:	76 06                	jbe    0x10002f6f
10002f69:	f3 0f 5c c1          	subss  xmm0,xmm1
10002f6d:	eb 09                	jmp    0x10002f78
10002f6f:	0f 2f d0             	comiss xmm2,xmm0
10002f72:	76 04                	jbe    0x10002f78
10002f74:	f3 0f 58 c1          	addss  xmm0,xmm1
10002f78:	f3 0f 59 c3          	mulss  xmm0,xmm3
10002f7c:	f3 0f 58 c4          	addss  xmm0,xmm4
10002f80:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
10002f85:	f3 0f 10 66 08       	movss  xmm4,DWORD PTR [esi+0x8]
10002f8a:	f3 0f 10 47 08       	movss  xmm0,DWORD PTR [edi+0x8]
10002f8f:	f3 0f 5c c4          	subss  xmm0,xmm4
10002f93:	5f                   	pop    edi
10002f94:	5e                   	pop    esi
10002f95:	0f 2f c5             	comiss xmm0,xmm5
10002f98:	76 06                	jbe    0x10002fa0
10002f9a:	f3 0f 5c c1          	subss  xmm0,xmm1
10002f9e:	eb 09                	jmp    0x10002fa9
10002fa0:	0f 2f d0             	comiss xmm2,xmm0
10002fa3:	76 04                	jbe    0x10002fa9
10002fa5:	f3 0f 58 c1          	addss  xmm0,xmm1
10002fa9:	f3 0f 59 c3          	mulss  xmm0,xmm3
10002fad:	50                   	push   eax
10002fae:	f3 0f 58 c4          	addss  xmm0,xmm4
10002fb2:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
10002fb7:	e8 84 00 00 00       	call   0x10003040
10002fbc:	83 c4 04             	add    esp,0x4
10002fbf:	5d                   	pop    ebp
10002fc0:	c3                   	ret
