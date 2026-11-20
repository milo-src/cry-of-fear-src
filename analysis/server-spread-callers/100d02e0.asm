
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100d02e0 <.text+0xcf2e0>:
100d02e0:	53                   	push   ebx
100d02e1:	8b d9                	mov    ebx,ecx
100d02e3:	56                   	push   esi
100d02e4:	57                   	push   edi
100d02e5:	83 ec 08             	sub    esp,0x8
100d02e8:	8b 83 f8 01 00 00    	mov    eax,DWORD PTR [ebx+0x1f8]
100d02ee:	8b f0                	mov    esi,eax
100d02f0:	8b f8                	mov    edi,eax
100d02f2:	f3 0f 10 80 8c 00 00 	movss  xmm0,DWORD PTR [eax+0x8c]
100d02f9:	00 
100d02fa:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
100d0300:	f3 0f 10 80 80 00 00 	movss  xmm0,DWORD PTR [eax+0x80]
100d0307:	00 
100d0308:	8b 83 60 01 00 00    	mov    eax,DWORD PTR [ebx+0x160]
100d030e:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100d0313:	ff b0 88 22 00 00    	push   DWORD PTR [eax+0x2288]
100d0319:	e8 32 9d 04 00       	call   0x1011a050
100d031e:	f3 0f 10 86 88 00 00 	movss  xmm0,DWORD PTR [esi+0x88]
100d0325:	00 
100d0326:	8b 83 60 01 00 00    	mov    eax,DWORD PTR [ebx+0x160]
100d032c:	d9 5c 24 08          	fstp   DWORD PTR [esp+0x8]
100d0330:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
100d0336:	f3 0f 10 46 7c       	movss  xmm0,DWORD PTR [esi+0x7c]
100d033b:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100d0340:	ff b0 88 22 00 00    	push   DWORD PTR [eax+0x2288]
100d0346:	e8 05 9d 04 00       	call   0x1011a050
100d034b:	f3 0f 10 87 84 00 00 	movss  xmm0,DWORD PTR [edi+0x84]
100d0352:	00 
100d0353:	8b 83 60 01 00 00    	mov    eax,DWORD PTR [ebx+0x160]
100d0359:	d9 5c 24 08          	fstp   DWORD PTR [esp+0x8]
100d035d:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
100d0363:	f3 0f 10 47 78       	movss  xmm0,DWORD PTR [edi+0x78]
100d0368:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100d036d:	ff b0 88 22 00 00    	push   DWORD PTR [eax+0x2288]
100d0373:	e8 d8 9c 04 00       	call   0x1011a050
100d0378:	8b 8b 60 01 00 00    	mov    ecx,DWORD PTR [ebx+0x160]
100d037e:	83 c4 08             	add    esp,0x8
100d0381:	d9 1c 24             	fstp   DWORD PTR [esp]
100d0384:	e8 27 8e 02 00       	call   0x100f91b0
100d0389:	5f                   	pop    edi
100d038a:	5e                   	pop    esi
100d038b:	5b                   	pop    ebx
100d038c:	c3                   	ret
