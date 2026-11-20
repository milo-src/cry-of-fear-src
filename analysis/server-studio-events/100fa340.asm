
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fa340 <.text+0xf9340>:
100fa340:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100fa345:	53                   	push   ebx
100fa346:	8b d9                	mov    ebx,ecx
100fa348:	56                   	push   esi
100fa349:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100fa34f:	57                   	push   edi
100fa350:	03 83 74 03 00 00    	add    eax,DWORD PTR [ebx+0x374]
100fa356:	50                   	push   eax
100fa357:	6a 00                	push   0x0
100fa359:	e8 32 e2 01 00       	call   0x10118590
100fa35e:	83 c4 08             	add    esp,0x8
100fa361:	8b f0                	mov    esi,eax
100fa363:	33 ff                	xor    edi,edi
100fa365:	85 f6                	test   esi,esi
100fa367:	74 39                	je     0x100fa3a2
100fa369:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100fa36c:	f6 80 a8 01 00 00 20 	test   BYTE PTR [eax+0x1a8],0x20
100fa373:	74 09                	je     0x100fa37e
100fa375:	8b 06                	mov    eax,DWORD PTR [esi]
100fa377:	8b ce                	mov    ecx,esi
100fa379:	ff 50 78             	call   DWORD PTR [eax+0x78]
100fa37c:	8b f8                	mov    edi,eax
100fa37e:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100fa384:	8b 89 98 00 00 00    	mov    ecx,DWORD PTR [ecx+0x98]
100fa38a:	03 8b 74 03 00 00    	add    ecx,DWORD PTR [ebx+0x374]
100fa390:	51                   	push   ecx
100fa391:	56                   	push   esi
100fa392:	e8 f9 e1 01 00       	call   0x10118590
100fa397:	83 c4 08             	add    esp,0x8
100fa39a:	8b f0                	mov    esi,eax
100fa39c:	85 ff                	test   edi,edi
100fa39e:	74 c5                	je     0x100fa365
100fa3a0:	eb 4c                	jmp    0x100fa3ee
100fa3a2:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100fa3a7:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100fa3ad:	03 83 74 03 00 00    	add    eax,DWORD PTR [ebx+0x374]
100fa3b3:	50                   	push   eax
100fa3b4:	6a 00                	push   0x0
100fa3b6:	e8 a5 e0 01 00       	call   0x10118460
100fa3bb:	83 c4 08             	add    esp,0x8
100fa3be:	8b f0                	mov    esi,eax
100fa3c0:	85 f6                	test   esi,esi
100fa3c2:	74 76                	je     0x100fa43a
100fa3c4:	8b 16                	mov    edx,DWORD PTR [esi]
100fa3c6:	8b ce                	mov    ecx,esi
100fa3c8:	ff 52 78             	call   DWORD PTR [edx+0x78]
100fa3cb:	8b f8                	mov    edi,eax
100fa3cd:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100fa3d2:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100fa3d8:	03 83 74 03 00 00    	add    eax,DWORD PTR [ebx+0x374]
100fa3de:	50                   	push   eax
100fa3df:	56                   	push   esi
100fa3e0:	e8 7b e0 01 00       	call   0x10118460
100fa3e5:	83 c4 08             	add    esp,0x8
100fa3e8:	8b f0                	mov    esi,eax
100fa3ea:	85 ff                	test   edi,edi
100fa3ec:	74 d2                	je     0x100fa3c0
100fa3ee:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100fa3f1:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100fa3f7:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
100fa3fd:	8b f0                	mov    esi,eax
100fa3ff:	83 c4 04             	add    esp,0x4
100fa402:	85 f6                	test   esi,esi
100fa404:	74 34                	je     0x100fa43a
100fa406:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100fa40c:	8b 93 6c 03 00 00    	mov    edx,DWORD PTR [ebx+0x36c]
100fa412:	03 91 98 00 00 00    	add    edx,DWORD PTR [ecx+0x98]
100fa418:	52                   	push   edx
100fa419:	56                   	push   esi
100fa41a:	e8 71 51 f1 ff       	call   0x1000f590
100fa41f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100fa424:	8b 8b 70 03 00 00    	mov    ecx,DWORD PTR [ebx+0x370]
100fa42a:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100fa430:	51                   	push   ecx
100fa431:	56                   	push   esi
100fa432:	e8 59 51 f1 ff       	call   0x1000f590
100fa437:	83 c4 10             	add    esp,0x10
100fa43a:	5f                   	pop    edi
100fa43b:	5e                   	pop    esi
100fa43c:	8b cb                	mov    ecx,ebx
100fa43e:	5b                   	pop    ebx
100fa43f:	e9 0c ce f1 ff       	jmp    0x10017250
