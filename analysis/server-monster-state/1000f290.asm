
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000f290 <.text+0xe290>:
1000f290:	55                   	push   ebp
1000f291:	8b ec                	mov    ebp,esp
1000f293:	83 e4 f8             	and    esp,0xfffffff8
1000f296:	51                   	push   ecx
1000f297:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1000f29a:	56                   	push   esi
1000f29b:	85 c9                	test   ecx,ecx
1000f29d:	0f 84 d9 00 00 00    	je     0x1000f37c
1000f2a3:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1000f2a6:	8b 80 2c 01 00 00    	mov    eax,DWORD PTR [eax+0x12c]
1000f2ac:	3b 81 a4 00 00 00    	cmp    eax,DWORD PTR [ecx+0xa4]
1000f2b2:	7c 17                	jl     0x1000f2cb
1000f2b4:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
1000f2b7:	c7 00 00 00 00 00    	mov    DWORD PTR [eax],0x0
1000f2bd:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
1000f2c0:	c7 00 00 00 00 00    	mov    DWORD PTR [eax],0x0
1000f2c6:	5e                   	pop    esi
1000f2c7:	8b e5                	mov    esp,ebp
1000f2c9:	5d                   	pop    ebp
1000f2ca:	c3                   	ret
1000f2cb:	69 f0 b0 00 00 00    	imul   esi,eax,0xb0
1000f2d1:	03 b1 a8 00 00 00    	add    esi,DWORD PTR [ecx+0xa8]
1000f2d7:	03 f1                	add    esi,ecx
1000f2d9:	8b 46 38             	mov    eax,DWORD PTR [esi+0x38]
1000f2dc:	83 f8 01             	cmp    eax,0x1
1000f2df:	0f 8e 85 00 00 00    	jle    0x1000f36a
1000f2e5:	f3 0f 10 4e 20       	movss  xmm1,DWORD PTR [esi+0x20]
1000f2ea:	48                   	dec    eax
1000f2eb:	f3 0f 59 0d 84 13 1a 	mulss  xmm1,DWORD PTR ds:0x101a1384
1000f2f2:	10 
1000f2f3:	0f 57 c0             	xorps  xmm0,xmm0
1000f2f6:	f3 0f 2a c0          	cvtsi2ss xmm0,eax
1000f2fa:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
1000f2fd:	f3 0f 5e c8          	divss  xmm1,xmm0
1000f301:	f3 0f 11 08          	movss  DWORD PTR [eax],xmm1
1000f305:	f3 0f 10 4e 50       	movss  xmm1,DWORD PTR [esi+0x50]
1000f30a:	f3 0f 10 56 4c       	movss  xmm2,DWORD PTR [esi+0x4c]
1000f30f:	f3 0f 10 46 54       	movss  xmm0,DWORD PTR [esi+0x54]
1000f314:	f3 0f 59 d2          	mulss  xmm2,xmm2
1000f318:	f3 0f 59 c9          	mulss  xmm1,xmm1
1000f31c:	f3 0f 59 c0          	mulss  xmm0,xmm0
1000f320:	f3 0f 58 d1          	addss  xmm2,xmm1
1000f324:	0f 57 c9             	xorps  xmm1,xmm1
1000f327:	f3 0f 58 d0          	addss  xmm2,xmm0
1000f32b:	0f 5a c2             	cvtps2pd xmm0,xmm2
1000f32e:	66 0f 2e c8          	ucomisd xmm1,xmm0
1000f332:	77 06                	ja     0x1000f33a
1000f334:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
1000f338:	eb 05                	jmp    0x1000f33f
1000f33a:	e8 51 cb 15 00       	call   0x1016be90
1000f33f:	8b 4d 14             	mov    ecx,DWORD PTR [ebp+0x14]
1000f342:	0f 57 c9             	xorps  xmm1,xmm1
1000f345:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
1000f349:	f3 0f 11 09          	movss  DWORD PTR [ecx],xmm1
1000f34d:	8b 46 38             	mov    eax,DWORD PTR [esi+0x38]
1000f350:	f3 0f 59 4e 20       	mulss  xmm1,DWORD PTR [esi+0x20]
1000f355:	48                   	dec    eax
1000f356:	66 0f 6e c0          	movd   xmm0,eax
1000f35a:	0f 5b c0             	cvtdq2ps xmm0,xmm0
1000f35d:	f3 0f 5e c8          	divss  xmm1,xmm0
1000f361:	f3 0f 11 09          	movss  DWORD PTR [ecx],xmm1
1000f365:	5e                   	pop    esi
1000f366:	8b e5                	mov    esp,ebp
1000f368:	5d                   	pop    ebp
1000f369:	c3                   	ret
1000f36a:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
1000f36d:	c7 00 00 00 80 43    	mov    DWORD PTR [eax],0x43800000
1000f373:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
1000f376:	c7 00 00 00 00 00    	mov    DWORD PTR [eax],0x0
1000f37c:	5e                   	pop    esi
1000f37d:	8b e5                	mov    esp,ebp
1000f37f:	5d                   	pop    ebp
1000f380:	c3                   	ret
