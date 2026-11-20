
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100882c0 <.text+0x872c0>:
100882c0:	55                   	push   ebp
100882c1:	8b ec                	mov    ebp,esp
100882c3:	8a 15 4e 2e 22 10    	mov    dl,BYTE PTR ds:0x10222e4e
100882c9:	83 ec 5c             	sub    esp,0x5c
100882cc:	56                   	push   esi
100882cd:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100882d0:	57                   	push   edi
100882d1:	8b f9                	mov    edi,ecx
100882d3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100882d6:	f6 80 a8 01 00 00 80 	test   BYTE PTR [eax+0x1a8],0x80
100882dd:	74 1e                	je     0x100882fd
100882df:	84 d2                	test   dl,dl
100882e1:	74 1a                	je     0x100882fd
100882e3:	68 ec ec 1b 10       	push   0x101becec
100882e8:	6a 01                	push   0x1
100882ea:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100882f0:	83 c4 08             	add    esp,0x8
100882f3:	33 c0                	xor    eax,eax
100882f5:	5f                   	pop    edi
100882f6:	5e                   	pop    esi
100882f7:	8b e5                	mov    esp,ebp
100882f9:	5d                   	pop    ebp
100882fa:	c2 04 00             	ret    0x4
100882fd:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
10088303:	85 c9                	test   ecx,ecx
10088305:	74 5c                	je     0x10088363
10088307:	8b 01                	mov    eax,DWORD PTR [ecx]
10088309:	ff 50 20             	call   DWORD PTR [eax+0x20]
1008830c:	85 c0                	test   eax,eax
1008830e:	74 4d                	je     0x1008835d
10088310:	8b 06                	mov    eax,DWORD PTR [esi]
10088312:	8b ce                	mov    ecx,esi
10088314:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
1008831a:	85 c0                	test   eax,eax
1008831c:	74 3f                	je     0x1008835d
1008831e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10088321:	f3 0f 10 80 60 02 00 	movss  xmm0,DWORD PTR [eax+0x260]
10088328:	00 
10088329:	0f 2e 05 a0 1e 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1ea0
10088330:	9f                   	lahf
10088331:	f6 c4 44             	test   ah,0x44
10088334:	7a 27                	jp     0x1008835d
10088336:	80 3d 4e 2e 22 10 00 	cmp    BYTE PTR ds:0x10222e4e,0x0
1008833d:	0f 84 f5 00 00 00    	je     0x10088438
10088343:	68 0c ed 1b 10       	push   0x101bed0c
10088348:	6a 01                	push   0x1
1008834a:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10088350:	83 c4 08             	add    esp,0x8
10088353:	33 c0                	xor    eax,eax
10088355:	5f                   	pop    edi
10088356:	5e                   	pop    esi
10088357:	8b e5                	mov    esp,ebp
10088359:	5d                   	pop    ebp
1008835a:	c2 04 00             	ret    0x4
1008835d:	8a 15 4e 2e 22 10    	mov    dl,BYTE PTR ds:0x10222e4e
10088363:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
10088366:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10088369:	83 b9 c4 01 00 00 03 	cmp    DWORD PTR [ecx+0x1c4],0x3
10088370:	0f 84 cc 00 00 00    	je     0x10088442
10088376:	83 b8 c4 01 00 00 03 	cmp    DWORD PTR [eax+0x1c4],0x3
1008837d:	0f 84 cc 00 00 00    	je     0x1008844f
10088383:	f3 0f 10 a1 7c 01 00 	movss  xmm4,DWORD PTR [ecx+0x17c]
1008838a:	00 
1008838b:	f3 0f 10 49 0c       	movss  xmm1,DWORD PTR [ecx+0xc]
10088390:	f3 0f 10 99 80 01 00 	movss  xmm3,DWORD PTR [ecx+0x180]
10088397:	00 
10088398:	f3 0f 58 e1          	addss  xmm4,xmm1
1008839c:	f3 0f 10 51 10       	movss  xmm2,DWORD PTR [ecx+0x10]
100883a1:	f3 0f 10 81 78 01 00 	movss  xmm0,DWORD PTR [ecx+0x178]
100883a8:	00 
100883a9:	f3 0f 58 d3          	addss  xmm2,xmm3
100883ad:	f3 0f 58 41 08       	addss  xmm0,DWORD PTR [ecx+0x8]
100883b2:	8b 06                	mov    eax,DWORD PTR [esi]
100883b4:	8d 4d dc             	lea    ecx,[ebp-0x24]
100883b7:	51                   	push   ecx
100883b8:	8b ce                	mov    ecx,esi
100883ba:	f3 0f 11 65 f8       	movss  DWORD PTR [ebp-0x8],xmm4
100883bf:	f3 0f 11 55 fc       	movss  DWORD PTR [ebp-0x4],xmm2
100883c4:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
100883c9:	ff 90 00 01 00 00    	call   DWORD PTR [eax+0x100]
100883cf:	f3 0f 7e 00          	movq   xmm0,QWORD PTR [eax]
100883d3:	66 0f d6 45 e8       	movq   QWORD PTR [ebp-0x18],xmm0
100883d8:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
100883db:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
100883de:	8d 45 a4             	lea    eax,[ebp-0x5c]
100883e1:	50                   	push   eax
100883e2:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100883e5:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100883eb:	8d 45 e8             	lea    eax,[ebp-0x18]
100883ee:	6a 01                	push   0x1
100883f0:	6a 01                	push   0x1
100883f2:	50                   	push   eax
100883f3:	8d 45 f4             	lea    eax,[ebp-0xc]
100883f6:	50                   	push   eax
100883f7:	e8 24 24 09 00       	call   0x1011a820
100883fc:	f3 0f 10 45 b4       	movss  xmm0,DWORD PTR [ebp-0x4c]
10088401:	83 c4 18             	add    esp,0x18
10088404:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
1008840b:	9f                   	lahf
1008840c:	f6 c4 44             	test   ah,0x44
1008840f:	7b 49                	jnp    0x1008845a
10088411:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10088414:	8b 45 d4             	mov    eax,DWORD PTR [ebp-0x2c]
10088417:	3b 81 0c 02 00 00    	cmp    eax,DWORD PTR [ecx+0x20c]
1008841d:	74 3b                	je     0x1008845a
1008841f:	80 3d 4e 2e 22 10 00 	cmp    BYTE PTR ds:0x10222e4e,0x0
10088426:	74 10                	je     0x10088438
10088428:	68 40 ed 1b 10       	push   0x101bed40
1008842d:	6a 01                	push   0x1
1008842f:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10088435:	83 c4 08             	add    esp,0x8
10088438:	5f                   	pop    edi
10088439:	33 c0                	xor    eax,eax
1008843b:	5e                   	pop    esi
1008843c:	8b e5                	mov    esp,ebp
1008843e:	5d                   	pop    ebp
1008843f:	c2 04 00             	ret    0x4
10088442:	83 b8 c4 01 00 00 00 	cmp    DWORD PTR [eax+0x1c4],0x0
10088449:	0f 85 34 ff ff ff    	jne    0x10088383
1008844f:	84 d2                	test   dl,dl
10088451:	74 e5                	je     0x10088438
10088453:	68 24 ed 1b 10       	push   0x101bed24
10088458:	eb d3                	jmp    0x1008842d
1008845a:	5f                   	pop    edi
1008845b:	b8 01 00 00 00       	mov    eax,0x1
10088460:	5e                   	pop    esi
10088461:	8b e5                	mov    esp,ebp
10088463:	5d                   	pop    ebp
10088464:	c2 04 00             	ret    0x4
