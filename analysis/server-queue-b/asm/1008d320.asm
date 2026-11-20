
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008d320 <.text+0x8c320>:
1008d320:	56                   	push   esi
1008d321:	8b f1                	mov    esi,ecx
1008d323:	57                   	push   edi
1008d324:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
1008d327:	83 bf a4 01 00 00 00 	cmp    DWORD PTR [edi+0x1a4],0x0
1008d32e:	7c 3b                	jl     0x1008d36b
1008d330:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008d335:	8b 97 f0 01 00 00    	mov    edx,DWORD PTR [edi+0x1f0]
1008d33b:	6a 64                	push   0x64
1008d33d:	6a 00                	push   0x0
1008d33f:	03 90 98 00 00 00    	add    edx,DWORD PTR [eax+0x98]
1008d345:	83 ec 08             	sub    esp,0x8
1008d348:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1008d34f:	3f 
1008d350:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1008d357:	52                   	push   edx
1008d358:	6a 06                	push   0x6
1008d35a:	ff b7 0c 02 00 00    	push   DWORD PTR [edi+0x20c]
1008d360:	e8 8b f6 06 00       	call   0x100fc9f0
1008d365:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
1008d368:	83 c4 1c             	add    esp,0x1c
1008d36b:	c7 86 00 01 00 00 03 	mov    DWORD PTR [esi+0x100],0x3
1008d372:	00 00 00 
1008d375:	b9 78 f5 1b 10       	mov    ecx,0x101bf578
1008d37a:	c7 86 54 01 00 00 f0 	mov    DWORD PTR [esi+0x154],0x1008d6f0
1008d381:	d6 08 10 
1008d384:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008d389:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1008d38f:	03 07                	add    eax,DWORD PTR [edi]
1008d391:	8a 10                	mov    dl,BYTE PTR [eax]
1008d393:	3a 11                	cmp    dl,BYTE PTR [ecx]
1008d395:	75 1a                	jne    0x1008d3b1
1008d397:	84 d2                	test   dl,dl
1008d399:	74 12                	je     0x1008d3ad
1008d39b:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1008d39e:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1008d3a1:	75 0e                	jne    0x1008d3b1
1008d3a3:	83 c0 02             	add    eax,0x2
1008d3a6:	83 c1 02             	add    ecx,0x2
1008d3a9:	84 d2                	test   dl,dl
1008d3ab:	75 e4                	jne    0x1008d391
1008d3ad:	33 c0                	xor    eax,eax
1008d3af:	eb 05                	jmp    0x1008d3b6
1008d3b1:	1b c0                	sbb    eax,eax
1008d3b3:	83 c8 01             	or     eax,0x1
1008d3b6:	8b 8e b0 01 00 00    	mov    ecx,DWORD PTR [esi+0x1b0]
1008d3bc:	85 c0                	test   eax,eax
1008d3be:	75 62                	jne    0x1008d422
1008d3c0:	85 c9                	test   ecx,ecx
1008d3c2:	74 24                	je     0x1008d3e8
1008d3c4:	8d 8e e4 00 00 00    	lea    ecx,[esi+0xe4]
1008d3ca:	51                   	push   ecx
1008d3cb:	89 04 24             	mov    DWORD PTR [esp],eax
1008d3ce:	39 86 ac 01 00 00    	cmp    DWORD PTR [esi+0x1ac],eax
1008d3d4:	74 03                	je     0x1008d3d9
1008d3d6:	50                   	push   eax
1008d3d7:	eb 02                	jmp    0x1008d3db
1008d3d9:	6a 03                	push   0x3
1008d3db:	e8 b0 a3 f8 ff       	call   0x10017790
1008d3e0:	50                   	push   eax
1008d3e1:	8b ce                	mov    ecx,esi
1008d3e3:	e8 48 55 07 00       	call   0x10102930
1008d3e8:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008d3eb:	83 ec 10             	sub    esp,0x10
1008d3ee:	8b cc                	mov    ecx,esp
1008d3f0:	f3 0f 10 80 fc 01 00 	movss  xmm0,DWORD PTR [eax+0x1fc]
1008d3f7:	00 
1008d3f8:	8b 86 34 01 00 00    	mov    eax,DWORD PTR [esi+0x134]
1008d3fe:	89 01                	mov    DWORD PTR [ecx],eax
1008d400:	8b 86 38 01 00 00    	mov    eax,DWORD PTR [esi+0x138]
1008d406:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1008d409:	8b 86 3c 01 00 00    	mov    eax,DWORD PTR [esi+0x13c]
1008d40f:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1008d412:	8b ce                	mov    ecx,esi
1008d414:	f3 0f 11 44 24 0c    	movss  DWORD PTR [esp+0xc],xmm0
1008d41a:	e8 31 47 07 00       	call   0x10101b50
1008d41f:	5f                   	pop    edi
1008d420:	5e                   	pop    esi
1008d421:	c3                   	ret
1008d422:	85 c9                	test   ecx,ecx
1008d424:	74 20                	je     0x1008d446
1008d426:	51                   	push   ecx
1008d427:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1008d42e:	8d 8e e4 00 00 00    	lea    ecx,[esi+0xe4]
1008d434:	6a 00                	push   0x0
1008d436:	e8 55 a3 f8 ff       	call   0x10017790
1008d43b:	50                   	push   eax
1008d43c:	8b ce                	mov    ecx,esi
1008d43e:	e8 ed 54 07 00       	call   0x10102930
1008d443:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
1008d446:	f3 0f 10 87 fc 01 00 	movss  xmm0,DWORD PTR [edi+0x1fc]
1008d44d:	00 
1008d44e:	83 ec 10             	sub    esp,0x10
1008d451:	8b 86 1c 01 00 00    	mov    eax,DWORD PTR [esi+0x11c]
1008d457:	8b cc                	mov    ecx,esp
1008d459:	f3 0f 11 44 24 0c    	movss  DWORD PTR [esp+0xc],xmm0
1008d45f:	89 01                	mov    DWORD PTR [ecx],eax
1008d461:	8b 86 20 01 00 00    	mov    eax,DWORD PTR [esi+0x120]
1008d467:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1008d46a:	8b 86 24 01 00 00    	mov    eax,DWORD PTR [esi+0x124]
1008d470:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1008d473:	8b ce                	mov    ecx,esi
1008d475:	e8 46 51 07 00       	call   0x101025c0
1008d47a:	5f                   	pop    edi
1008d47b:	5e                   	pop    esi
1008d47c:	c3                   	ret
