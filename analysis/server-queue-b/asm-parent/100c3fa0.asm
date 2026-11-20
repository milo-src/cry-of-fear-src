
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c3fa0 <.text+0xc2fa0>:
100c3fa0:	55                   	push   ebp
100c3fa1:	8b ec                	mov    ebp,esp
100c3fa3:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100c3fa6:	83 ec 18             	sub    esp,0x18
100c3fa9:	56                   	push   esi
100c3faa:	8b 70 1c             	mov    esi,DWORD PTR [eax+0x1c]
100c3fad:	85 f6                	test   esi,esi
100c3faf:	0f 84 f9 00 00 00    	je     0x100c40ae
100c3fb5:	8b 4e 60             	mov    ecx,DWORD PTR [esi+0x60]
100c3fb8:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100c3fbb:	f6 c1 08             	test   cl,0x8
100c3fbe:	75 16                	jne    0x100c3fd6
100c3fc0:	f3 0f 7e 42 20       	movq   xmm0,QWORD PTR [edx+0x20]
100c3fc5:	83 c9 08             	or     ecx,0x8
100c3fc8:	66 0f d6 46 40       	movq   QWORD PTR [esi+0x40],xmm0
100c3fcd:	8b 42 28             	mov    eax,DWORD PTR [edx+0x28]
100c3fd0:	89 46 48             	mov    DWORD PTR [esi+0x48],eax
100c3fd3:	89 4e 60             	mov    DWORD PTR [esi+0x60],ecx
100c3fd6:	f6 c1 10             	test   cl,0x10
100c3fd9:	75 16                	jne    0x100c3ff1
100c3fdb:	f3 0f 7e 42 5c       	movq   xmm0,QWORD PTR [edx+0x5c]
100c3fe0:	83 c9 10             	or     ecx,0x10
100c3fe3:	66 0f d6 46 4c       	movq   QWORD PTR [esi+0x4c],xmm0
100c3fe8:	8b 42 64             	mov    eax,DWORD PTR [edx+0x64]
100c3feb:	89 46 54             	mov    DWORD PTR [esi+0x54],eax
100c3fee:	89 4e 60             	mov    DWORD PTR [esi+0x60],ecx
100c3ff1:	f3 0f 10 52 20       	movss  xmm2,DWORD PTR [edx+0x20]
100c3ff6:	83 ec 0c             	sub    esp,0xc
100c3ff9:	f3 0f 5c 55 0c       	subss  xmm2,DWORD PTR [ebp+0xc]
100c3ffe:	f3 0f 10 4a 24       	movss  xmm1,DWORD PTR [edx+0x24]
100c4003:	f3 0f 5c 4d 10       	subss  xmm1,DWORD PTR [ebp+0x10]
100c4008:	f3 0f 10 42 28       	movss  xmm0,DWORD PTR [edx+0x28]
100c400d:	f3 0f 5c 45 14       	subss  xmm0,DWORD PTR [ebp+0x14]
100c4012:	0f 14 d1             	unpcklps xmm2,xmm1
100c4015:	66 0f d6 52 20       	movq   QWORD PTR [edx+0x20],xmm2
100c401a:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
100c401f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100c4022:	89 42 28             	mov    DWORD PTR [edx+0x28],eax
100c4025:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100c4028:	f3 0f 10 51 5c       	movss  xmm2,DWORD PTR [ecx+0x5c]
100c402d:	f3 0f 10 49 60       	movss  xmm1,DWORD PTR [ecx+0x60]
100c4032:	f3 0f 10 41 64       	movss  xmm0,DWORD PTR [ecx+0x64]
100c4037:	f3 0f 5c 45 20       	subss  xmm0,DWORD PTR [ebp+0x20]
100c403c:	f3 0f 5c 55 18       	subss  xmm2,DWORD PTR [ebp+0x18]
100c4041:	f3 0f 5c 4d 1c       	subss  xmm1,DWORD PTR [ebp+0x1c]
100c4046:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
100c404b:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
100c404e:	0f 14 d1             	unpcklps xmm2,xmm1
100c4051:	66 0f d6 51 5c       	movq   QWORD PTR [ecx+0x5c],xmm2
100c4056:	89 41 64             	mov    DWORD PTR [ecx+0x64],eax
100c4059:	8b c4                	mov    eax,esp
100c405b:	f3 0f 10 45 18       	movss  xmm0,DWORD PTR [ebp+0x18]
100c4060:	83 ec 0c             	sub    esp,0xc
100c4063:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
100c4067:	f3 0f 10 45 1c       	movss  xmm0,DWORD PTR [ebp+0x1c]
100c406c:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
100c4071:	f3 0f 10 45 20       	movss  xmm0,DWORD PTR [ebp+0x20]
100c4076:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
100c407b:	8b c4                	mov    eax,esp
100c407d:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
100c4082:	56                   	push   esi
100c4083:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
100c4087:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
100c408c:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
100c4091:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
100c4096:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
100c409b:	e8 00 ff ff ff       	call   0x100c3fa0
100c40a0:	8b 76 20             	mov    esi,DWORD PTR [esi+0x20]
100c40a3:	83 c4 1c             	add    esp,0x1c
100c40a6:	85 f6                	test   esi,esi
100c40a8:	0f 85 07 ff ff ff    	jne    0x100c3fb5
100c40ae:	5e                   	pop    esi
100c40af:	8b e5                	mov    esp,ebp
100c40b1:	5d                   	pop    ebp
100c40b2:	c3                   	ret
