
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100d0230 <.text+0xcf230>:
100d0230:	53                   	push   ebx
100d0231:	8b d9                	mov    ebx,ecx
100d0233:	56                   	push   esi
100d0234:	57                   	push   edi
100d0235:	83 ec 08             	sub    esp,0x8
100d0238:	8b 83 f8 01 00 00    	mov    eax,DWORD PTR [ebx+0x1f8]
100d023e:	8b f0                	mov    esi,eax
100d0240:	8b f8                	mov    edi,eax
100d0242:	f3 0f 10 40 54       	movss  xmm0,DWORD PTR [eax+0x54]
100d0247:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
100d024d:	f3 0f 10 40 48       	movss  xmm0,DWORD PTR [eax+0x48]
100d0252:	8b 83 60 01 00 00    	mov    eax,DWORD PTR [ebx+0x160]
100d0258:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100d025d:	ff b0 88 22 00 00    	push   DWORD PTR [eax+0x2288]
100d0263:	e8 e8 9d 04 00       	call   0x1011a050
100d0268:	f3 0f 10 46 50       	movss  xmm0,DWORD PTR [esi+0x50]
100d026d:	8b 83 60 01 00 00    	mov    eax,DWORD PTR [ebx+0x160]
100d0273:	d9 5c 24 08          	fstp   DWORD PTR [esp+0x8]
100d0277:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
100d027d:	f3 0f 10 46 44       	movss  xmm0,DWORD PTR [esi+0x44]
100d0282:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100d0287:	ff b0 88 22 00 00    	push   DWORD PTR [eax+0x2288]
100d028d:	e8 be 9d 04 00       	call   0x1011a050
100d0292:	f3 0f 10 47 4c       	movss  xmm0,DWORD PTR [edi+0x4c]
100d0297:	8b 83 60 01 00 00    	mov    eax,DWORD PTR [ebx+0x160]
100d029d:	d9 5c 24 08          	fstp   DWORD PTR [esp+0x8]
100d02a1:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
100d02a7:	f3 0f 10 47 40       	movss  xmm0,DWORD PTR [edi+0x40]
100d02ac:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100d02b1:	ff b0 88 22 00 00    	push   DWORD PTR [eax+0x2288]
100d02b7:	e8 94 9d 04 00       	call   0x1011a050
100d02bc:	8b 8b 60 01 00 00    	mov    ecx,DWORD PTR [ebx+0x160]
100d02c2:	83 c4 08             	add    esp,0x8
100d02c5:	d9 1c 24             	fstp   DWORD PTR [esp]
100d02c8:	e8 e3 8e 02 00       	call   0x100f91b0
100d02cd:	5f                   	pop    edi
100d02ce:	5e                   	pop    esi
100d02cf:	5b                   	pop    ebx
100d02d0:	c3                   	ret
