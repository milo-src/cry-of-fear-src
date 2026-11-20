
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10105280 <.text+0x104280>:
10105280:	55                   	push   ebp
10105281:	8b ec                	mov    ebp,esp
10105283:	53                   	push   ebx
10105284:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
10105287:	57                   	push   edi
10105288:	8b f9                	mov    edi,ecx
1010528a:	85 db                	test   ebx,ebx
1010528c:	0f 84 b4 00 00 00    	je     0x10105346
10105292:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
10105297:	56                   	push   esi
10105298:	51                   	push   ecx
10105299:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1010529e:	e8 8d 0c 00 00       	call   0x10105f30
101052a3:	a1 88 31 22 10       	mov    eax,ds:0x10223188
101052a8:	8b cf                	mov    ecx,edi
101052aa:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
101052ae:	f3 0f 58 45 0c       	addss  xmm0,DWORD PTR [ebp+0xc]
101052b3:	0f 5a c0             	cvtps2pd xmm0,xmm0
101052b6:	f2 0f 58 05 98 1e 1a 	addsd  xmm0,QWORD PTR ds:0x101a1e98
101052bd:	10 
101052be:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
101052c2:	f3 0f 11 05 78 0d 23 	movss  DWORD PTR ds:0x10230d78,xmm0
101052c9:	10 
101052ca:	80 3b 21             	cmp    BYTE PTR [ebx],0x21
101052cd:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
101052d0:	8b b6 0c 02 00 00    	mov    esi,DWORD PTR [esi+0x20c]
101052d6:	75 3a                	jne    0x10105312
101052d8:	e8 63 fa ff ff       	call   0x10104d40
101052dd:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
101052e2:	50                   	push   eax
101052e3:	6a 00                	push   0x0
101052e5:	83 ec 08             	sub    esp,0x8
101052e8:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
101052ee:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
101052f3:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
101052f8:	53                   	push   ebx
101052f9:	6a 02                	push   0x2
101052fb:	56                   	push   esi
101052fc:	e8 ef 76 ff ff       	call   0x100fc9f0
10105301:	83 c4 1c             	add    esp,0x1c
10105304:	83 8f 68 03 00 00 08 	or     DWORD PTR [edi+0x368],0x8
1010530b:	5e                   	pop    esi
1010530c:	5f                   	pop    edi
1010530d:	5b                   	pop    ebx
1010530e:	5d                   	pop    ebp
1010530f:	c2 10 00             	ret    0x10
10105312:	6a ff                	push   0xffffffff
10105314:	e8 27 fa ff ff       	call   0x10104d40
10105319:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
1010531e:	50                   	push   eax
1010531f:	6a 00                	push   0x0
10105321:	83 ec 08             	sub    esp,0x8
10105324:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
1010532a:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
1010532f:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10105334:	53                   	push   ebx
10105335:	56                   	push   esi
10105336:	e8 15 91 ff ff       	call   0x100fe450
1010533b:	83 c4 1c             	add    esp,0x1c
1010533e:	83 8f 68 03 00 00 08 	or     DWORD PTR [edi+0x368],0x8
10105345:	5e                   	pop    esi
10105346:	5f                   	pop    edi
10105347:	5b                   	pop    ebx
10105348:	5d                   	pop    ebp
10105349:	c2 10 00             	ret    0x10
