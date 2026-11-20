
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011c1a0 <.text+0x11b1a0>:
1011c1a0:	55                   	push   ebp
1011c1a1:	8b ec                	mov    ebp,esp
1011c1a3:	57                   	push   edi
1011c1a4:	8b f9                	mov    edi,ecx
1011c1a6:	8b 07                	mov    eax,DWORD PTR [edi]
1011c1a8:	ff 90 40 01 00 00    	call   DWORD PTR [eax+0x140]
1011c1ae:	85 c0                	test   eax,eax
1011c1b0:	0f 84 a3 03 00 00    	je     0x1011c559
1011c1b6:	81 bf e4 01 00 00 66 	cmp    DWORD PTR [edi+0x1e4],0xfffffd66
1011c1bd:	fd ff ff 
1011c1c0:	75 0a                	jne    0x1011c1cc
1011c1c2:	c7 87 e4 01 00 00 00 	mov    DWORD PTR [edi+0x1e4],0x0
1011c1c9:	00 00 00 
1011c1cc:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
1011c1d2:	85 c0                	test   eax,eax
1011c1d4:	0f 84 7f 03 00 00    	je     0x1011c559
1011c1da:	80 b8 a9 03 00 00 00 	cmp    BYTE PTR [eax+0x3a9],0x0
1011c1e1:	0f 85 14 01 00 00    	jne    0x1011c2fb
1011c1e7:	c6 80 a9 03 00 00 01 	mov    BYTE PTR [eax+0x3a9],0x1
1011c1ee:	a1 90 31 22 10       	mov    eax,ds:0x10223190
1011c1f3:	85 c0                	test   eax,eax
1011c1f5:	0f 84 00 01 00 00    	je     0x1011c2fb
1011c1fb:	83 b8 f0 00 00 00 00 	cmp    DWORD PTR [eax+0xf0],0x0
1011c202:	74 4a                	je     0x1011c24e
1011c204:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
1011c20a:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1011c20d:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1011c213:	6a 00                	push   0x0
1011c215:	ff 35 e8 66 22 10    	push   DWORD PTR ds:0x102266e8
1011c21b:	6a 01                	push   0x1
1011c21d:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1011c223:	a1 90 31 22 10       	mov    eax,ds:0x10223190
1011c228:	8b 88 f0 00 00 00    	mov    ecx,DWORD PTR [eax+0xf0]
1011c22e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011c233:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1011c239:	51                   	push   ecx
1011c23a:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
1011c240:	83 c4 14             	add    esp,0x14
1011c243:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
1011c249:	a1 90 31 22 10       	mov    eax,ds:0x10223190
1011c24e:	85 c0                	test   eax,eax
1011c250:	0f 84 a5 00 00 00    	je     0x1011c2fb
1011c256:	83 b8 f4 00 00 00 00 	cmp    DWORD PTR [eax+0xf4],0x0
1011c25d:	74 4a                	je     0x1011c2a9
1011c25f:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
1011c265:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1011c268:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1011c26e:	6a 00                	push   0x0
1011c270:	ff 35 ec 66 22 10    	push   DWORD PTR ds:0x102266ec
1011c276:	6a 01                	push   0x1
1011c278:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1011c27e:	a1 90 31 22 10       	mov    eax,ds:0x10223190
1011c283:	8b 88 f4 00 00 00    	mov    ecx,DWORD PTR [eax+0xf4]
1011c289:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011c28e:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1011c294:	51                   	push   ecx
1011c295:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
1011c29b:	83 c4 14             	add    esp,0x14
1011c29e:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
1011c2a4:	a1 90 31 22 10       	mov    eax,ds:0x10223190
1011c2a9:	85 c0                	test   eax,eax
1011c2ab:	74 4e                	je     0x1011c2fb
1011c2ad:	83 b8 f8 00 00 00 00 	cmp    DWORD PTR [eax+0xf8],0x0
1011c2b4:	74 45                	je     0x1011c2fb
1011c2b6:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
1011c2bc:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1011c2bf:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1011c2c5:	6a 00                	push   0x0
1011c2c7:	ff 35 f0 66 22 10    	push   DWORD PTR ds:0x102266f0
1011c2cd:	6a 01                	push   0x1
1011c2cf:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1011c2d5:	a1 90 31 22 10       	mov    eax,ds:0x10223190
1011c2da:	8b 88 f8 00 00 00    	mov    ecx,DWORD PTR [eax+0xf8]
1011c2e0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011c2e5:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1011c2eb:	51                   	push   ecx
1011c2ec:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
1011c2f2:	83 c4 14             	add    esp,0x14
1011c2f5:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
1011c2fb:	8b 8f 6c 01 00 00    	mov    ecx,DWORD PTR [edi+0x16c]
1011c301:	53                   	push   ebx
1011c302:	56                   	push   esi
1011c303:	85 c9                	test   ecx,ecx
1011c305:	74 20                	je     0x1011c327
1011c307:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011c30c:	8b 98 98 00 00 00    	mov    ebx,DWORD PTR [eax+0x98]
1011c312:	03 d9                	add    ebx,ecx
1011c314:	53                   	push   ebx
1011c315:	68 6c 66 1e 10       	push   0x101e666c
1011c31a:	6a 01                	push   0x1
1011c31c:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1011c322:	83 c4 0c             	add    esp,0xc
1011c325:	eb 03                	jmp    0x1011c32a
1011c327:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
1011c32a:	c6 87 78 01 00 00 00 	mov    BYTE PTR [edi+0x178],0x0
1011c331:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011c336:	8b 00                	mov    eax,DWORD PTR [eax]
1011c338:	89 87 a0 01 00 00    	mov    DWORD PTR [edi+0x1a0],eax
1011c33e:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
1011c344:	c7 87 9c 01 00 00 00 	mov    DWORD PTR [edi+0x19c],0x0
1011c34b:	00 00 00 
1011c34e:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1011c351:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1011c357:	6a 00                	push   0x0
1011c359:	ff 35 64 66 22 10    	push   DWORD PTR ds:0x10226664
1011c35f:	6a 08                	push   0x8
1011c361:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1011c367:	83 c4 10             	add    esp,0x10
1011c36a:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
1011c370:	8b 97 60 01 00 00    	mov    edx,DWORD PTR [edi+0x160]
1011c376:	8b 8f dc 01 00 00    	mov    ecx,DWORD PTR [edi+0x1dc]
1011c37c:	8b 87 20 01 00 00    	mov    eax,DWORD PTR [edi+0x120]
1011c382:	3b 84 8a 40 25 00 00 	cmp    eax,DWORD PTR [edx+ecx*4+0x2540]
1011c389:	74 73                	je     0x1011c3fe
1011c38b:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
1011c38e:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1011c394:	6a 00                	push   0x0
1011c396:	ff 35 b8 65 22 10    	push   DWORD PTR ds:0x102265b8
1011c39c:	6a 01                	push   0x1
1011c39e:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1011c3a4:	ff b7 68 01 00 00    	push   DWORD PTR [edi+0x168]
1011c3aa:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1011c3b0:	6b 87 68 01 00 00 2c 	imul   eax,DWORD PTR [edi+0x168],0x2c
1011c3b7:	ff b0 a4 18 23 10    	push   DWORD PTR [eax+0x102318a4]
1011c3bd:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1011c3c3:	8b 8f dc 01 00 00    	mov    ecx,DWORD PTR [edi+0x1dc]
1011c3c9:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
1011c3cf:	ff b4 88 40 25 00 00 	push   DWORD PTR [eax+ecx*4+0x2540]
1011c3d6:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
1011c3dc:	83 c4 1c             	add    esp,0x1c
1011c3df:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
1011c3e5:	8b 8f dc 01 00 00    	mov    ecx,DWORD PTR [edi+0x1dc]
1011c3eb:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
1011c3f1:	8b 84 88 40 25 00 00 	mov    eax,DWORD PTR [eax+ecx*4+0x2540]
1011c3f8:	89 87 20 01 00 00    	mov    DWORD PTR [edi+0x120],eax
1011c3fe:	6a 05                	push   0x5
1011c400:	6a fb                	push   0xfffffffb
1011c402:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
1011c408:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1011c40b:	83 c4 08             	add    esp,0x8
1011c40e:	8d 70 64             	lea    esi,[eax+0x64]
1011c411:	f3 0f 10 81 b4 01 00 	movss  xmm0,DWORD PTR [ecx+0x1b4]
1011c418:	00 
1011c419:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
1011c420:	9f                   	lahf
1011c421:	f6 c4 44             	test   ah,0x44
1011c424:	0f 8b 88 00 00 00    	jnp    0x1011c4b2
1011c42a:	6a 02                	push   0x2
1011c42c:	6a 00                	push   0x0
1011c42e:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
1011c434:	83 c4 08             	add    esp,0x8
1011c437:	83 e8 00             	sub    eax,0x0
1011c43a:	74 41                	je     0x1011c47d
1011c43c:	83 e8 01             	sub    eax,0x1
1011c43f:	74 20                	je     0x1011c461
1011c441:	83 e8 01             	sub    eax,0x1
1011c444:	75 76                	jne    0x1011c4bc
1011c446:	56                   	push   esi
1011c447:	50                   	push   eax
1011c448:	83 ec 08             	sub    esp,0x8
1011c44b:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1011c452:	3f 
1011c453:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1011c45a:	68 88 08 1b 10       	push   0x101b0888
1011c45f:	eb 36                	jmp    0x1011c497
1011c461:	56                   	push   esi
1011c462:	6a 00                	push   0x0
1011c464:	83 ec 08             	sub    esp,0x8
1011c467:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1011c46e:	3f 
1011c46f:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1011c476:	68 b8 08 1b 10       	push   0x101b08b8
1011c47b:	eb 1a                	jmp    0x1011c497
1011c47d:	56                   	push   esi
1011c47e:	6a 00                	push   0x0
1011c480:	83 ec 08             	sub    esp,0x8
1011c483:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1011c48a:	3f 
1011c48b:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1011c492:	68 20 65 1e 10       	push   0x101e6520
1011c497:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
1011c49d:	6a 00                	push   0x0
1011c49f:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1011c4a2:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1011c4a8:	e8 43 05 fe ff       	call   0x100fc9f0
1011c4ad:	83 c4 1c             	add    esp,0x1c
1011c4b0:	eb 0a                	jmp    0x1011c4bc
1011c4b2:	c7 81 b4 01 00 00 00 	mov    DWORD PTR [ecx+0x1b4],0x0
1011c4b9:	00 00 00 
1011c4bc:	8b 8f 60 01 00 00    	mov    ecx,DWORD PTR [edi+0x160]
1011c4c2:	e8 e9 99 fd ff       	call   0x100f5eb0
1011c4c7:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011c4cc:	8b cb                	mov    ecx,ebx
1011c4ce:	8b 55 14             	mov    edx,DWORD PTR [ebp+0x14]
1011c4d1:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1011c4d7:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
1011c4dd:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1011c4e0:	89 88 bc 00 00 00    	mov    DWORD PTR [eax+0xbc],ecx
1011c4e6:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011c4eb:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
1011c4ee:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1011c4f4:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
1011c4fa:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1011c4fd:	89 88 c0 00 00 00    	mov    DWORD PTR [eax+0xc0],ecx
1011c503:	8b 8f 60 01 00 00    	mov    ecx,DWORD PTR [edi+0x160]
1011c509:	81 c1 78 26 00 00    	add    ecx,0x2678
1011c50f:	90                   	nop
1011c510:	8a 02                	mov    al,BYTE PTR [edx]
1011c512:	8d 52 01             	lea    edx,[edx+0x1]
1011c515:	88 01                	mov    BYTE PTR [ecx],al
1011c517:	8d 49 01             	lea    ecx,[ecx+0x1]
1011c51a:	84 c0                	test   al,al
1011c51c:	75 f2                	jne    0x1011c510
1011c51e:	ff 75 1c             	push   DWORD PTR [ebp+0x1c]
1011c521:	8b 07                	mov    eax,DWORD PTR [edi]
1011c523:	8b cf                	mov    ecx,edi
1011c525:	ff 75 18             	push   DWORD PTR [ebp+0x18]
1011c528:	8b 75 10             	mov    esi,DWORD PTR [ebp+0x10]
1011c52b:	56                   	push   esi
1011c52c:	ff 90 98 01 00 00    	call   DWORD PTR [eax+0x198]
1011c532:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1011c535:	53                   	push   ebx
1011c536:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1011c53c:	ff 15 50 2f 22 10    	call   DWORD PTR ds:0x10222f50
1011c542:	83 c4 08             	add    esp,0x8
1011c545:	8b cf                	mov    ecx,edi
1011c547:	56                   	push   esi
1011c548:	e8 c3 3c 00 00       	call   0x10120210
1011c54d:	5e                   	pop    esi
1011c54e:	5b                   	pop    ebx
1011c54f:	b8 01 00 00 00       	mov    eax,0x1
1011c554:	5f                   	pop    edi
1011c555:	5d                   	pop    ebp
1011c556:	c2 18 00             	ret    0x18
1011c559:	33 c0                	xor    eax,eax
1011c55b:	5f                   	pop    edi
1011c55c:	5d                   	pop    ebp
1011c55d:	c2 18 00             	ret    0x18
