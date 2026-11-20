
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1002c2a0 <.text+0x2b2a0>:
1002c2a0:	55                   	push   ebp
1002c2a1:	8b ec                	mov    ebp,esp
1002c2a3:	51                   	push   ecx
1002c2a4:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1002c2a9:	56                   	push   esi
1002c2aa:	8b f1                	mov    esi,ecx
1002c2ac:	57                   	push   edi
1002c2ad:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1002c2b1:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1002c2b4:	0f 2f 81 64 02 00 00 	comiss xmm0,DWORD PTR [ecx+0x264]
1002c2bb:	0f 86 d7 00 00 00    	jbe    0x1002c398
1002c2c1:	f6 81 a4 01 00 00 01 	test   BYTE PTR [ecx+0x1a4],0x1
1002c2c8:	75 2b                	jne    0x1002c2f5
1002c2ca:	68 54 cb 1a 10       	push   0x101acb54
1002c2cf:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
1002c2d5:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
1002c2d8:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
1002c2dd:	83 c4 04             	add    esp,0x4
1002c2e0:	0f 57 c9             	xorps  xmm1,xmm1
1002c2e3:	0f 2e c1             	ucomiss xmm0,xmm1
1002c2e6:	9f                   	lahf
1002c2e7:	f6 c4 44             	test   ah,0x44
1002c2ea:	7a 09                	jp     0x1002c2f5
1002c2ec:	56                   	push   esi
1002c2ed:	e8 0e d6 0e 00       	call   0x10119900
1002c2f2:	83 c4 04             	add    esp,0x4
1002c2f5:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1002c2f8:	8b b8 98 02 00 00    	mov    edi,DWORD PTR [eax+0x298]
1002c2fe:	85 ff                	test   edi,edi
1002c300:	74 4b                	je     0x1002c34d
1002c302:	8b 7f 7c             	mov    edi,DWORD PTR [edi+0x7c]
1002c305:	85 ff                	test   edi,edi
1002c307:	74 69                	je     0x1002c372
1002c309:	8b 07                	mov    eax,DWORD PTR [edi]
1002c30b:	8b cf                	mov    ecx,edi
1002c30d:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
1002c313:	85 c0                	test   eax,eax
1002c315:	74 5b                	je     0x1002c372
1002c317:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1002c31a:	f6 80 a4 01 00 00 01 	test   BYTE PTR [eax+0x1a4],0x1
1002c321:	75 4f                	jne    0x1002c372
1002c323:	6a 00                	push   0x0
1002c325:	6a 00                	push   0x0
1002c327:	68 00 00 40 00       	push   0x400000
1002c32c:	ff 77 04             	push   DWORD PTR [edi+0x4]
1002c32f:	e8 ac 62 fe ff       	call   0x100125e0
1002c334:	83 c4 04             	add    esp,0x4
1002c337:	8b c8                	mov    ecx,eax
1002c339:	e8 c2 0c 0b 00       	call   0x100dd000
1002c33e:	84 c0                	test   al,al
1002c340:	75 30                	jne    0x1002c372
1002c342:	56                   	push   esi
1002c343:	e8 b8 d5 0e 00       	call   0x10119900
1002c348:	83 c4 04             	add    esp,0x4
1002c34b:	eb 25                	jmp    0x1002c372
1002c34d:	68 30 21 1a 10       	push   0x101a2130
1002c352:	6a 00                	push   0x0
1002c354:	e8 07 c1 0e 00       	call   0x10118460
1002c359:	83 c4 08             	add    esp,0x8
1002c35c:	85 c0                	test   eax,eax
1002c35e:	74 12                	je     0x1002c372
1002c360:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1002c363:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1002c366:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
1002c36c:	89 81 98 02 00 00    	mov    DWORD PTR [ecx+0x298],eax
1002c372:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1002c377:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1002c37b:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1002c37e:	0f 5a c0             	cvtps2pd xmm0,xmm0
1002c381:	f2 0f 58 05 48 1e 1a 	addsd  xmm0,QWORD PTR ds:0x101a1e48
1002c388:	10 
1002c389:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1002c38d:	f3 0f 11 80 64 02 00 	movss  DWORD PTR [eax+0x264],xmm0
1002c394:	00 
1002c395:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1002c398:	83 b9 9c 01 00 00 00 	cmp    DWORD PTR [ecx+0x19c],0x0
1002c39f:	0f 84 e7 00 00 00    	je     0x1002c48c
1002c3a5:	6a 0d                	push   0xd
1002c3a7:	ff 15 9c 11 1a 10    	call   DWORD PTR ds:0x101a119c
1002c3ad:	b9 00 80 00 00       	mov    ecx,0x8000
1002c3b2:	66 85 c1             	test   cx,ax
1002c3b5:	75 19                	jne    0x1002c3d0
1002c3b7:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1002c3bc:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1002c3bf:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1002c3c3:	0f 2f 81 58 02 00 00 	comiss xmm0,DWORD PTR [ecx+0x258]
1002c3ca:	0f 86 bc 00 00 00    	jbe    0x1002c48c
1002c3d0:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1002c3d3:	8b 80 9c 01 00 00    	mov    eax,DWORD PTR [eax+0x19c]
1002c3d9:	85 c0                	test   eax,eax
1002c3db:	75 12                	jne    0x1002c3ef
1002c3dd:	50                   	push   eax
1002c3de:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
1002c3e4:	83 c4 04             	add    esp,0x4
1002c3e7:	85 c0                	test   eax,eax
1002c3e9:	0f 84 9d 00 00 00    	je     0x1002c48c
1002c3ef:	8b 78 7c             	mov    edi,DWORD PTR [eax+0x7c]
1002c3f2:	85 ff                	test   edi,edi
1002c3f4:	0f 84 92 00 00 00    	je     0x1002c48c
1002c3fa:	8b 07                	mov    eax,DWORD PTR [edi]
1002c3fc:	8b cf                	mov    ecx,edi
1002c3fe:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
1002c404:	85 c0                	test   eax,eax
1002c406:	0f 84 80 00 00 00    	je     0x1002c48c
1002c40c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1002c40f:	83 b8 4c 02 00 00 01 	cmp    DWORD PTR [eax+0x24c],0x1
1002c416:	74 0a                	je     0x1002c422
1002c418:	c6 87 e9 21 00 00 00 	mov    BYTE PTR [edi+0x21e9],0x0
1002c41f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1002c422:	83 b8 50 02 00 00 01 	cmp    DWORD PTR [eax+0x250],0x1
1002c429:	74 0d                	je     0x1002c438
1002c42b:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1002c42e:	81 a0 a8 01 00 00 7f 	and    DWORD PTR [eax+0x1a8],0xffffff7f
1002c435:	ff ff ff 
1002c438:	c7 87 14 23 00 00 01 	mov    DWORD PTR [edi+0x2314],0x1
1002c43f:	00 00 00 
1002c442:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1002c445:	51                   	push   ecx
1002c446:	f3 0f 10 80 68 02 00 	movss  xmm0,DWORD PTR [eax+0x268]
1002c44d:	00 
1002c44e:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1002c453:	68 84 cb 1a 10       	push   0x101acb84
1002c458:	ff 15 34 30 22 10    	call   DWORD PTR ds:0x10223034
1002c45e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1002c461:	83 c4 08             	add    esp,0x8
1002c464:	c7 80 9c 01 00 00 00 	mov    DWORD PTR [eax+0x19c],0x0
1002c46b:	00 00 00 
1002c46e:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1002c471:	83 a7 00 25 00 00 f7 	and    DWORD PTR [edi+0x2500],0xfffffff7
1002c478:	c7 87 b4 1e 00 00 00 	mov    DWORD PTR [edi+0x1eb4],0x0
1002c47f:	00 00 00 
1002c482:	c7 80 60 02 00 00 00 	mov    DWORD PTR [eax+0x260],0x0
1002c489:	00 00 00 
1002c48c:	8b 06                	mov    eax,DWORD PTR [esi]
1002c48e:	51                   	push   ecx
1002c48f:	8b ce                	mov    ecx,esi
1002c491:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1002c498:	ff 50 08             	call   DWORD PTR [eax+0x8]
1002c49b:	5f                   	pop    edi
1002c49c:	5e                   	pop    esi
1002c49d:	8b e5                	mov    esp,ebp
1002c49f:	5d                   	pop    ebp
1002c4a0:	c3                   	ret
