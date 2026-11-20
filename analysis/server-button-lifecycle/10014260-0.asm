
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10014260 <.text+0x13260>:
10014260:	57                   	push   edi
10014261:	8b f9                	mov    edi,ecx
10014263:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10014266:	f6 80 a4 01 00 00 40 	test   BYTE PTR [eax+0x1a4],0x40
1001426d:	74 3f                	je     0x100142ae
1001426f:	68 00 56 1a 10       	push   0x101a5600
10014274:	e8 b7 27 10 00       	call   0x10116a30
10014279:	68 14 56 1a 10       	push   0x101a5614
1001427e:	e8 ad 27 10 00       	call   0x10116a30
10014283:	68 28 56 1a 10       	push   0x101a5628
10014288:	e8 a3 27 10 00       	call   0x10116a30
1001428d:	68 3c 56 1a 10       	push   0x101a563c
10014292:	e8 99 27 10 00       	call   0x10116a30
10014297:	68 50 56 1a 10       	push   0x101a5650
1001429c:	e8 8f 27 10 00       	call   0x10116a30
100142a1:	68 64 56 1a 10       	push   0x101a5664
100142a6:	e8 85 27 10 00       	call   0x10116a30
100142ab:	83 c4 18             	add    esp,0x18
100142ae:	68 78 56 1a 10       	push   0x101a5678
100142b3:	e8 d8 26 10 00       	call   0x10116990
100142b8:	8b 8f 94 01 00 00    	mov    ecx,DWORD PTR [edi+0x194]
100142be:	83 c4 04             	add    esp,0x4
100142c1:	85 c9                	test   ecx,ecx
100142c3:	74 16                	je     0x100142db
100142c5:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100142ca:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100142d0:	03 c1                	add    eax,ecx
100142d2:	50                   	push   eax
100142d3:	e8 58 27 10 00       	call   0x10116a30
100142d8:	83 c4 04             	add    esp,0x4
100142db:	8b 8f 98 01 00 00    	mov    ecx,DWORD PTR [edi+0x198]
100142e1:	85 c9                	test   ecx,ecx
100142e3:	74 16                	je     0x100142fb
100142e5:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100142ea:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100142f0:	03 c1                	add    eax,ecx
100142f2:	50                   	push   eax
100142f3:	e8 38 27 10 00       	call   0x10116a30
100142f8:	83 c4 04             	add    esp,0x4
100142fb:	8a 87 d8 01 00 00    	mov    al,BYTE PTR [edi+0x1d8]
10014301:	56                   	push   esi
10014302:	84 c0                	test   al,al
10014304:	74 21                	je     0x10014327
10014306:	0f b6 c0             	movzx  eax,al
10014309:	50                   	push   eax
1001430a:	e8 e1 ea ff ff       	call   0x10012df0
1001430f:	8b f0                	mov    esi,eax
10014311:	56                   	push   esi
10014312:	e8 19 27 10 00       	call   0x10116a30
10014317:	56                   	push   esi
10014318:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
1001431e:	83 c4 0c             	add    esp,0xc
10014321:	89 87 b4 01 00 00    	mov    DWORD PTR [edi+0x1b4],eax
10014327:	8a 87 da 01 00 00    	mov    al,BYTE PTR [edi+0x1da]
1001432d:	84 c0                	test   al,al
1001432f:	74 21                	je     0x10014352
10014331:	0f b6 c0             	movzx  eax,al
10014334:	50                   	push   eax
10014335:	e8 b6 ea ff ff       	call   0x10012df0
1001433a:	8b f0                	mov    esi,eax
1001433c:	56                   	push   esi
1001433d:	e8 ee 26 10 00       	call   0x10116a30
10014342:	56                   	push   esi
10014343:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10014349:	83 c4 0c             	add    esp,0xc
1001434c:	89 87 bc 01 00 00    	mov    DWORD PTR [edi+0x1bc],eax
10014352:	0f b6 87 d9 01 00 00 	movzx  eax,BYTE PTR [edi+0x1d9]
10014359:	48                   	dec    eax
1001435a:	5e                   	pop    esi
1001435b:	83 f8 08             	cmp    eax,0x8
1001435e:	0f 87 af 00 00 00    	ja     0x10014413
10014364:	ff 24 85 00 45 01 10 	jmp    DWORD PTR [eax*4+0x10014500]
1001436b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10014370:	b9 8c 56 1a 10       	mov    ecx,0x101a568c
10014375:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1001437b:	e9 95 00 00 00       	jmp    0x10014415
10014380:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10014385:	b9 90 56 1a 10       	mov    ecx,0x101a5690
1001438a:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
10014390:	e9 80 00 00 00       	jmp    0x10014415
10014395:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001439a:	b9 94 56 1a 10       	mov    ecx,0x101a5694
1001439f:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
100143a5:	eb 6e                	jmp    0x10014415
100143a7:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100143ac:	b9 98 56 1a 10       	mov    ecx,0x101a5698
100143b1:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
100143b7:	eb 5c                	jmp    0x10014415
100143b9:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100143be:	b9 a0 56 1a 10       	mov    ecx,0x101a56a0
100143c3:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
100143c9:	eb 4a                	jmp    0x10014415
100143cb:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100143d0:	b9 a8 56 1a 10       	mov    ecx,0x101a56a8
100143d5:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
100143db:	eb 38                	jmp    0x10014415
100143dd:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100143e2:	b9 b0 56 1a 10       	mov    ecx,0x101a56b0
100143e7:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
100143ed:	eb 26                	jmp    0x10014415
100143ef:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100143f4:	b9 b8 56 1a 10       	mov    ecx,0x101a56b8
100143f9:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
100143ff:	eb 14                	jmp    0x10014415
10014401:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10014406:	b9 bc 56 1a 10       	mov    ecx,0x101a56bc
1001440b:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
10014411:	eb 02                	jmp    0x10014415
10014413:	33 c9                	xor    ecx,ecx
10014415:	89 8f b8 01 00 00    	mov    DWORD PTR [edi+0x1b8],ecx
1001441b:	0f b6 87 db 01 00 00 	movzx  eax,BYTE PTR [edi+0x1db]
10014422:	48                   	dec    eax
10014423:	83 f8 07             	cmp    eax,0x7
10014426:	0f 87 c7 00 00 00    	ja     0x100144f3
1001442c:	ff 24 85 24 45 01 10 	jmp    DWORD PTR [eax*4+0x10014524]
10014433:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10014438:	b9 c0 56 1a 10       	mov    ecx,0x101a56c0
1001443d:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
10014443:	89 8f c0 01 00 00    	mov    DWORD PTR [edi+0x1c0],ecx
10014449:	5f                   	pop    edi
1001444a:	c3                   	ret
1001444b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10014450:	b9 c4 56 1a 10       	mov    ecx,0x101a56c4
10014455:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1001445b:	89 8f c0 01 00 00    	mov    DWORD PTR [edi+0x1c0],ecx
10014461:	5f                   	pop    edi
10014462:	c3                   	ret
10014463:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10014468:	b9 c8 56 1a 10       	mov    ecx,0x101a56c8
1001446d:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
10014473:	89 8f c0 01 00 00    	mov    DWORD PTR [edi+0x1c0],ecx
10014479:	5f                   	pop    edi
1001447a:	c3                   	ret
1001447b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10014480:	b9 cc 56 1a 10       	mov    ecx,0x101a56cc
10014485:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1001448b:	89 8f c0 01 00 00    	mov    DWORD PTR [edi+0x1c0],ecx
10014491:	5f                   	pop    edi
10014492:	c3                   	ret
10014493:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10014498:	b9 d4 56 1a 10       	mov    ecx,0x101a56d4
1001449d:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
100144a3:	89 8f c0 01 00 00    	mov    DWORD PTR [edi+0x1c0],ecx
100144a9:	5f                   	pop    edi
100144aa:	c3                   	ret
100144ab:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100144b0:	b9 dc 56 1a 10       	mov    ecx,0x101a56dc
100144b5:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
100144bb:	89 8f c0 01 00 00    	mov    DWORD PTR [edi+0x1c0],ecx
100144c1:	5f                   	pop    edi
100144c2:	c3                   	ret
100144c3:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100144c8:	b9 e4 56 1a 10       	mov    ecx,0x101a56e4
100144cd:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
100144d3:	89 8f c0 01 00 00    	mov    DWORD PTR [edi+0x1c0],ecx
100144d9:	5f                   	pop    edi
100144da:	c3                   	ret
100144db:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100144e0:	b9 ec 56 1a 10       	mov    ecx,0x101a56ec
100144e5:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
100144eb:	89 8f c0 01 00 00    	mov    DWORD PTR [edi+0x1c0],ecx
100144f1:	5f                   	pop    edi
100144f2:	c3                   	ret
100144f3:	33 c9                	xor    ecx,ecx
100144f5:	89 8f c0 01 00 00    	mov    DWORD PTR [edi+0x1c0],ecx
100144fb:	5f                   	pop    edi
100144fc:	c3                   	ret
