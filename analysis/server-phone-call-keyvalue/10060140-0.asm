
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10060140 <.text+0x5f140>:
10060140:	55                   	push   ebp
10060141:	8b ec                	mov    ebp,esp
10060143:	53                   	push   ebx
10060144:	56                   	push   esi
10060145:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10060148:	8b d9                	mov    ebx,ecx
1006014a:	57                   	push   edi
1006014b:	b9 48 5b 1b 10       	mov    ecx,0x101b5b48
10060150:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
10060153:	8b c7                	mov    eax,edi
10060155:	8a 10                	mov    dl,BYTE PTR [eax]
10060157:	3a 11                	cmp    dl,BYTE PTR [ecx]
10060159:	75 1a                	jne    0x10060175
1006015b:	84 d2                	test   dl,dl
1006015d:	74 12                	je     0x10060171
1006015f:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10060162:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10060165:	75 0e                	jne    0x10060175
10060167:	83 c0 02             	add    eax,0x2
1006016a:	83 c1 02             	add    ecx,0x2
1006016d:	84 d2                	test   dl,dl
1006016f:	75 e4                	jne    0x10060155
10060171:	33 c0                	xor    eax,eax
10060173:	eb 05                	jmp    0x1006017a
10060175:	1b c0                	sbb    eax,eax
10060177:	83 c8 01             	or     eax,0x1
1006017a:	85 c0                	test   eax,eax
1006017c:	75 1f                	jne    0x1006019d
1006017e:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060181:	e8 d8 b3 10 00       	call   0x1016b55e
10060186:	83 c4 04             	add    esp,0x4
10060189:	89 83 ec 00 00 00    	mov    DWORD PTR [ebx+0xec],eax
1006018f:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060196:	5f                   	pop    edi
10060197:	5e                   	pop    esi
10060198:	5b                   	pop    ebx
10060199:	5d                   	pop    ebp
1006019a:	c2 04 00             	ret    0x4
1006019d:	b9 58 5b 1b 10       	mov    ecx,0x101b5b58
100601a2:	8b c7                	mov    eax,edi
100601a4:	8a 10                	mov    dl,BYTE PTR [eax]
100601a6:	3a 11                	cmp    dl,BYTE PTR [ecx]
100601a8:	75 1a                	jne    0x100601c4
100601aa:	84 d2                	test   dl,dl
100601ac:	74 12                	je     0x100601c0
100601ae:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100601b1:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100601b4:	75 0e                	jne    0x100601c4
100601b6:	83 c0 02             	add    eax,0x2
100601b9:	83 c1 02             	add    ecx,0x2
100601bc:	84 d2                	test   dl,dl
100601be:	75 e4                	jne    0x100601a4
100601c0:	33 c0                	xor    eax,eax
100601c2:	eb 05                	jmp    0x100601c9
100601c4:	1b c0                	sbb    eax,eax
100601c6:	83 c8 01             	or     eax,0x1
100601c9:	85 c0                	test   eax,eax
100601cb:	75 1f                	jne    0x100601ec
100601cd:	ff 76 08             	push   DWORD PTR [esi+0x8]
100601d0:	e8 89 b3 10 00       	call   0x1016b55e
100601d5:	83 c4 04             	add    esp,0x4
100601d8:	89 83 f0 00 00 00    	mov    DWORD PTR [ebx+0xf0],eax
100601de:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100601e5:	5f                   	pop    edi
100601e6:	5e                   	pop    esi
100601e7:	5b                   	pop    ebx
100601e8:	5d                   	pop    ebp
100601e9:	c2 04 00             	ret    0x4
100601ec:	b9 68 5b 1b 10       	mov    ecx,0x101b5b68
100601f1:	8b c7                	mov    eax,edi
100601f3:	8a 10                	mov    dl,BYTE PTR [eax]
100601f5:	3a 11                	cmp    dl,BYTE PTR [ecx]
100601f7:	75 1a                	jne    0x10060213
100601f9:	84 d2                	test   dl,dl
100601fb:	74 12                	je     0x1006020f
100601fd:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10060200:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10060203:	75 0e                	jne    0x10060213
10060205:	83 c0 02             	add    eax,0x2
10060208:	83 c1 02             	add    ecx,0x2
1006020b:	84 d2                	test   dl,dl
1006020d:	75 e4                	jne    0x100601f3
1006020f:	33 c0                	xor    eax,eax
10060211:	eb 05                	jmp    0x10060218
10060213:	1b c0                	sbb    eax,eax
10060215:	83 c8 01             	or     eax,0x1
10060218:	85 c0                	test   eax,eax
1006021a:	75 1f                	jne    0x1006023b
1006021c:	ff 76 08             	push   DWORD PTR [esi+0x8]
1006021f:	e8 3a b3 10 00       	call   0x1016b55e
10060224:	83 c4 04             	add    esp,0x4
10060227:	89 83 f4 00 00 00    	mov    DWORD PTR [ebx+0xf4],eax
1006022d:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060234:	5f                   	pop    edi
10060235:	5e                   	pop    esi
10060236:	5b                   	pop    ebx
10060237:	5d                   	pop    ebp
10060238:	c2 04 00             	ret    0x4
1006023b:	68 78 5b 1b 10       	push   0x101b5b78
10060240:	57                   	push   edi
10060241:	e8 5a a9 fa ff       	call   0x1000aba0
10060246:	83 c4 08             	add    esp,0x8
10060249:	85 c0                	test   eax,eax
1006024b:	74 1f                	je     0x1006026c
1006024d:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060250:	e8 09 b3 10 00       	call   0x1016b55e
10060255:	83 c4 04             	add    esp,0x4
10060258:	89 83 f8 00 00 00    	mov    DWORD PTR [ebx+0xf8],eax
1006025e:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060265:	5f                   	pop    edi
10060266:	5e                   	pop    esi
10060267:	5b                   	pop    ebx
10060268:	5d                   	pop    ebp
10060269:	c2 04 00             	ret    0x4
1006026c:	68 88 5b 1b 10       	push   0x101b5b88
10060271:	57                   	push   edi
10060272:	e8 29 a9 fa ff       	call   0x1000aba0
10060277:	83 c4 08             	add    esp,0x8
1006027a:	85 c0                	test   eax,eax
1006027c:	74 1f                	je     0x1006029d
1006027e:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060281:	e8 d8 b2 10 00       	call   0x1016b55e
10060286:	83 c4 04             	add    esp,0x4
10060289:	89 83 fc 00 00 00    	mov    DWORD PTR [ebx+0xfc],eax
1006028f:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060296:	5f                   	pop    edi
10060297:	5e                   	pop    esi
10060298:	5b                   	pop    ebx
10060299:	5d                   	pop    ebp
1006029a:	c2 04 00             	ret    0x4
1006029d:	68 98 5b 1b 10       	push   0x101b5b98
100602a2:	57                   	push   edi
100602a3:	e8 f8 a8 fa ff       	call   0x1000aba0
100602a8:	83 c4 08             	add    esp,0x8
100602ab:	85 c0                	test   eax,eax
100602ad:	74 1f                	je     0x100602ce
100602af:	ff 76 08             	push   DWORD PTR [esi+0x8]
100602b2:	e8 a7 b2 10 00       	call   0x1016b55e
100602b7:	83 c4 04             	add    esp,0x4
100602ba:	89 83 00 01 00 00    	mov    DWORD PTR [ebx+0x100],eax
100602c0:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100602c7:	5f                   	pop    edi
100602c8:	5e                   	pop    esi
100602c9:	5b                   	pop    ebx
100602ca:	5d                   	pop    ebp
100602cb:	c2 04 00             	ret    0x4
100602ce:	68 a8 5b 1b 10       	push   0x101b5ba8
100602d3:	57                   	push   edi
100602d4:	e8 c7 a8 fa ff       	call   0x1000aba0
100602d9:	83 c4 08             	add    esp,0x8
100602dc:	85 c0                	test   eax,eax
100602de:	74 1f                	je     0x100602ff
100602e0:	ff 76 08             	push   DWORD PTR [esi+0x8]
100602e3:	e8 76 b2 10 00       	call   0x1016b55e
100602e8:	83 c4 04             	add    esp,0x4
100602eb:	89 83 04 01 00 00    	mov    DWORD PTR [ebx+0x104],eax
100602f1:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100602f8:	5f                   	pop    edi
100602f9:	5e                   	pop    esi
100602fa:	5b                   	pop    ebx
100602fb:	5d                   	pop    ebp
100602fc:	c2 04 00             	ret    0x4
100602ff:	68 b8 5b 1b 10       	push   0x101b5bb8
10060304:	57                   	push   edi
10060305:	e8 96 a8 fa ff       	call   0x1000aba0
1006030a:	83 c4 08             	add    esp,0x8
1006030d:	85 c0                	test   eax,eax
1006030f:	74 1f                	je     0x10060330
10060311:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060314:	e8 45 b2 10 00       	call   0x1016b55e
10060319:	83 c4 04             	add    esp,0x4
1006031c:	89 83 08 01 00 00    	mov    DWORD PTR [ebx+0x108],eax
10060322:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060329:	5f                   	pop    edi
1006032a:	5e                   	pop    esi
1006032b:	5b                   	pop    ebx
1006032c:	5d                   	pop    ebp
1006032d:	c2 04 00             	ret    0x4
10060330:	68 c8 5b 1b 10       	push   0x101b5bc8
10060335:	57                   	push   edi
10060336:	e8 65 a8 fa ff       	call   0x1000aba0
1006033b:	83 c4 08             	add    esp,0x8
1006033e:	85 c0                	test   eax,eax
10060340:	74 1f                	je     0x10060361
10060342:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060345:	e8 14 b2 10 00       	call   0x1016b55e
1006034a:	83 c4 04             	add    esp,0x4
1006034d:	89 83 0c 01 00 00    	mov    DWORD PTR [ebx+0x10c],eax
10060353:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1006035a:	5f                   	pop    edi
1006035b:	5e                   	pop    esi
1006035c:	5b                   	pop    ebx
1006035d:	5d                   	pop    ebp
1006035e:	c2 04 00             	ret    0x4
10060361:	68 d8 5b 1b 10       	push   0x101b5bd8
10060366:	57                   	push   edi
10060367:	e8 34 a8 fa ff       	call   0x1000aba0
1006036c:	83 c4 08             	add    esp,0x8
1006036f:	85 c0                	test   eax,eax
10060371:	74 1f                	je     0x10060392
10060373:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060376:	e8 e3 b1 10 00       	call   0x1016b55e
1006037b:	83 c4 04             	add    esp,0x4
1006037e:	89 83 10 01 00 00    	mov    DWORD PTR [ebx+0x110],eax
10060384:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1006038b:	5f                   	pop    edi
1006038c:	5e                   	pop    esi
1006038d:	5b                   	pop    ebx
1006038e:	5d                   	pop    ebp
1006038f:	c2 04 00             	ret    0x4
10060392:	68 ec 5b 1b 10       	push   0x101b5bec
10060397:	57                   	push   edi
10060398:	e8 03 a8 fa ff       	call   0x1000aba0
1006039d:	83 c4 08             	add    esp,0x8
100603a0:	85 c0                	test   eax,eax
100603a2:	74 1f                	je     0x100603c3
100603a4:	ff 76 08             	push   DWORD PTR [esi+0x8]
100603a7:	e8 b2 b1 10 00       	call   0x1016b55e
100603ac:	83 c4 04             	add    esp,0x4
100603af:	89 83 14 01 00 00    	mov    DWORD PTR [ebx+0x114],eax
100603b5:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100603bc:	5f                   	pop    edi
100603bd:	5e                   	pop    esi
100603be:	5b                   	pop    ebx
100603bf:	5d                   	pop    ebp
100603c0:	c2 04 00             	ret    0x4
100603c3:	68 00 5c 1b 10       	push   0x101b5c00
100603c8:	57                   	push   edi
100603c9:	e8 d2 a7 fa ff       	call   0x1000aba0
100603ce:	83 c4 08             	add    esp,0x8
100603d1:	85 c0                	test   eax,eax
100603d3:	74 1f                	je     0x100603f4
100603d5:	ff 76 08             	push   DWORD PTR [esi+0x8]
100603d8:	e8 81 b1 10 00       	call   0x1016b55e
100603dd:	83 c4 04             	add    esp,0x4
100603e0:	89 83 18 01 00 00    	mov    DWORD PTR [ebx+0x118],eax
100603e6:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100603ed:	5f                   	pop    edi
100603ee:	5e                   	pop    esi
100603ef:	5b                   	pop    ebx
100603f0:	5d                   	pop    ebp
100603f1:	c2 04 00             	ret    0x4
100603f4:	68 14 5c 1b 10       	push   0x101b5c14
100603f9:	57                   	push   edi
100603fa:	e8 a1 a7 fa ff       	call   0x1000aba0
100603ff:	83 c4 08             	add    esp,0x8
10060402:	85 c0                	test   eax,eax
10060404:	74 1f                	je     0x10060425
10060406:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060409:	e8 50 b1 10 00       	call   0x1016b55e
1006040e:	83 c4 04             	add    esp,0x4
10060411:	89 83 1c 01 00 00    	mov    DWORD PTR [ebx+0x11c],eax
10060417:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1006041e:	5f                   	pop    edi
1006041f:	5e                   	pop    esi
10060420:	5b                   	pop    ebx
10060421:	5d                   	pop    ebp
10060422:	c2 04 00             	ret    0x4
10060425:	68 28 5c 1b 10       	push   0x101b5c28
1006042a:	57                   	push   edi
1006042b:	e8 70 a7 fa ff       	call   0x1000aba0
10060430:	83 c4 08             	add    esp,0x8
10060433:	85 c0                	test   eax,eax
10060435:	74 1f                	je     0x10060456
10060437:	ff 76 08             	push   DWORD PTR [esi+0x8]
1006043a:	e8 1f b1 10 00       	call   0x1016b55e
1006043f:	83 c4 04             	add    esp,0x4
10060442:	89 83 20 01 00 00    	mov    DWORD PTR [ebx+0x120],eax
10060448:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1006044f:	5f                   	pop    edi
10060450:	5e                   	pop    esi
10060451:	5b                   	pop    ebx
10060452:	5d                   	pop    ebp
10060453:	c2 04 00             	ret    0x4
10060456:	68 3c 5c 1b 10       	push   0x101b5c3c
1006045b:	57                   	push   edi
1006045c:	e8 3f a7 fa ff       	call   0x1000aba0
10060461:	83 c4 08             	add    esp,0x8
10060464:	85 c0                	test   eax,eax
10060466:	74 1f                	je     0x10060487
10060468:	ff 76 08             	push   DWORD PTR [esi+0x8]
1006046b:	e8 ee b0 10 00       	call   0x1016b55e
10060470:	83 c4 04             	add    esp,0x4
10060473:	89 83 24 01 00 00    	mov    DWORD PTR [ebx+0x124],eax
10060479:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060480:	5f                   	pop    edi
10060481:	5e                   	pop    esi
10060482:	5b                   	pop    ebx
10060483:	5d                   	pop    ebp
10060484:	c2 04 00             	ret    0x4
10060487:	68 50 5c 1b 10       	push   0x101b5c50
1006048c:	57                   	push   edi
1006048d:	e8 0e a7 fa ff       	call   0x1000aba0
10060492:	83 c4 08             	add    esp,0x8
10060495:	85 c0                	test   eax,eax
10060497:	74 1f                	je     0x100604b8
10060499:	ff 76 08             	push   DWORD PTR [esi+0x8]
1006049c:	e8 bd b0 10 00       	call   0x1016b55e
100604a1:	83 c4 04             	add    esp,0x4
100604a4:	89 83 28 01 00 00    	mov    DWORD PTR [ebx+0x128],eax
100604aa:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100604b1:	5f                   	pop    edi
100604b2:	5e                   	pop    esi
100604b3:	5b                   	pop    ebx
100604b4:	5d                   	pop    ebp
100604b5:	c2 04 00             	ret    0x4
100604b8:	68 64 5c 1b 10       	push   0x101b5c64
100604bd:	57                   	push   edi
100604be:	e8 dd a6 fa ff       	call   0x1000aba0
100604c3:	83 c4 08             	add    esp,0x8
100604c6:	85 c0                	test   eax,eax
100604c8:	74 1f                	je     0x100604e9
100604ca:	ff 76 08             	push   DWORD PTR [esi+0x8]
100604cd:	e8 8c b0 10 00       	call   0x1016b55e
100604d2:	83 c4 04             	add    esp,0x4
100604d5:	89 83 2c 01 00 00    	mov    DWORD PTR [ebx+0x12c],eax
100604db:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100604e2:	5f                   	pop    edi
100604e3:	5e                   	pop    esi
100604e4:	5b                   	pop    ebx
100604e5:	5d                   	pop    ebp
100604e6:	c2 04 00             	ret    0x4
100604e9:	68 78 5c 1b 10       	push   0x101b5c78
100604ee:	57                   	push   edi
100604ef:	e8 ac a6 fa ff       	call   0x1000aba0
100604f4:	83 c4 08             	add    esp,0x8
100604f7:	85 c0                	test   eax,eax
100604f9:	74 1f                	je     0x1006051a
100604fb:	ff 76 08             	push   DWORD PTR [esi+0x8]
100604fe:	e8 5b b0 10 00       	call   0x1016b55e
10060503:	83 c4 04             	add    esp,0x4
10060506:	89 83 30 01 00 00    	mov    DWORD PTR [ebx+0x130],eax
1006050c:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060513:	5f                   	pop    edi
10060514:	5e                   	pop    esi
10060515:	5b                   	pop    ebx
10060516:	5d                   	pop    ebp
10060517:	c2 04 00             	ret    0x4
1006051a:	68 8c 5c 1b 10       	push   0x101b5c8c
1006051f:	57                   	push   edi
10060520:	e8 7b a6 fa ff       	call   0x1000aba0
10060525:	83 c4 08             	add    esp,0x8
10060528:	85 c0                	test   eax,eax
1006052a:	74 1f                	je     0x1006054b
1006052c:	ff 76 08             	push   DWORD PTR [esi+0x8]
1006052f:	e8 2a b0 10 00       	call   0x1016b55e
10060534:	83 c4 04             	add    esp,0x4
10060537:	89 83 34 01 00 00    	mov    DWORD PTR [ebx+0x134],eax
1006053d:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060544:	5f                   	pop    edi
10060545:	5e                   	pop    esi
10060546:	5b                   	pop    ebx
10060547:	5d                   	pop    ebp
10060548:	c2 04 00             	ret    0x4
1006054b:	68 a0 5c 1b 10       	push   0x101b5ca0
10060550:	57                   	push   edi
10060551:	e8 4a a6 fa ff       	call   0x1000aba0
10060556:	83 c4 08             	add    esp,0x8
10060559:	85 c0                	test   eax,eax
1006055b:	74 1f                	je     0x1006057c
1006055d:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060560:	e8 f9 af 10 00       	call   0x1016b55e
10060565:	83 c4 04             	add    esp,0x4
10060568:	89 83 38 01 00 00    	mov    DWORD PTR [ebx+0x138],eax
1006056e:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060575:	5f                   	pop    edi
10060576:	5e                   	pop    esi
10060577:	5b                   	pop    ebx
10060578:	5d                   	pop    ebp
10060579:	c2 04 00             	ret    0x4
1006057c:	68 b4 5c 1b 10       	push   0x101b5cb4
10060581:	57                   	push   edi
10060582:	e8 19 a6 fa ff       	call   0x1000aba0
10060587:	83 c4 08             	add    esp,0x8
1006058a:	85 c0                	test   eax,eax
1006058c:	74 1f                	je     0x100605ad
1006058e:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060591:	e8 c8 af 10 00       	call   0x1016b55e
10060596:	83 c4 04             	add    esp,0x4
10060599:	89 83 3c 01 00 00    	mov    DWORD PTR [ebx+0x13c],eax
1006059f:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100605a6:	5f                   	pop    edi
100605a7:	5e                   	pop    esi
100605a8:	5b                   	pop    ebx
100605a9:	5d                   	pop    ebp
100605aa:	c2 04 00             	ret    0x4
100605ad:	68 c8 5c 1b 10       	push   0x101b5cc8
100605b2:	57                   	push   edi
100605b3:	e8 e8 a5 fa ff       	call   0x1000aba0
100605b8:	83 c4 08             	add    esp,0x8
100605bb:	85 c0                	test   eax,eax
100605bd:	74 1f                	je     0x100605de
100605bf:	ff 76 08             	push   DWORD PTR [esi+0x8]
100605c2:	e8 97 af 10 00       	call   0x1016b55e
100605c7:	83 c4 04             	add    esp,0x4
100605ca:	89 83 40 01 00 00    	mov    DWORD PTR [ebx+0x140],eax
100605d0:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100605d7:	5f                   	pop    edi
100605d8:	5e                   	pop    esi
100605d9:	5b                   	pop    ebx
100605da:	5d                   	pop    ebp
100605db:	c2 04 00             	ret    0x4
100605de:	68 dc 5c 1b 10       	push   0x101b5cdc
100605e3:	57                   	push   edi
100605e4:	e8 b7 a5 fa ff       	call   0x1000aba0
100605e9:	83 c4 08             	add    esp,0x8
100605ec:	85 c0                	test   eax,eax
100605ee:	74 1f                	je     0x1006060f
100605f0:	ff 76 08             	push   DWORD PTR [esi+0x8]
100605f3:	e8 66 af 10 00       	call   0x1016b55e
100605f8:	83 c4 04             	add    esp,0x4
100605fb:	89 83 44 01 00 00    	mov    DWORD PTR [ebx+0x144],eax
10060601:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060608:	5f                   	pop    edi
10060609:	5e                   	pop    esi
1006060a:	5b                   	pop    ebx
1006060b:	5d                   	pop    ebp
1006060c:	c2 04 00             	ret    0x4
1006060f:	68 f0 5c 1b 10       	push   0x101b5cf0
10060614:	57                   	push   edi
10060615:	e8 86 a5 fa ff       	call   0x1000aba0
1006061a:	83 c4 08             	add    esp,0x8
1006061d:	85 c0                	test   eax,eax
1006061f:	74 1f                	je     0x10060640
10060621:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060624:	e8 35 af 10 00       	call   0x1016b55e
10060629:	83 c4 04             	add    esp,0x4
1006062c:	89 83 48 01 00 00    	mov    DWORD PTR [ebx+0x148],eax
10060632:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060639:	5f                   	pop    edi
1006063a:	5e                   	pop    esi
1006063b:	5b                   	pop    ebx
1006063c:	5d                   	pop    ebp
1006063d:	c2 04 00             	ret    0x4
10060640:	68 04 5d 1b 10       	push   0x101b5d04
10060645:	57                   	push   edi
10060646:	e8 55 a5 fa ff       	call   0x1000aba0
1006064b:	83 c4 08             	add    esp,0x8
1006064e:	85 c0                	test   eax,eax
10060650:	74 1f                	je     0x10060671
10060652:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060655:	e8 04 af 10 00       	call   0x1016b55e
1006065a:	83 c4 04             	add    esp,0x4
1006065d:	89 83 4c 01 00 00    	mov    DWORD PTR [ebx+0x14c],eax
10060663:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1006066a:	5f                   	pop    edi
1006066b:	5e                   	pop    esi
1006066c:	5b                   	pop    ebx
1006066d:	5d                   	pop    ebp
1006066e:	c2 04 00             	ret    0x4
10060671:	68 18 5d 1b 10       	push   0x101b5d18
10060676:	57                   	push   edi
10060677:	e8 24 a5 fa ff       	call   0x1000aba0
1006067c:	83 c4 08             	add    esp,0x8
1006067f:	85 c0                	test   eax,eax
10060681:	74 1f                	je     0x100606a2
10060683:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060686:	e8 d3 ae 10 00       	call   0x1016b55e
1006068b:	83 c4 04             	add    esp,0x4
1006068e:	89 83 50 01 00 00    	mov    DWORD PTR [ebx+0x150],eax
10060694:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1006069b:	5f                   	pop    edi
1006069c:	5e                   	pop    esi
1006069d:	5b                   	pop    ebx
1006069e:	5d                   	pop    ebp
1006069f:	c2 04 00             	ret    0x4
100606a2:	68 2c 5d 1b 10       	push   0x101b5d2c
100606a7:	57                   	push   edi
100606a8:	e8 f3 a4 fa ff       	call   0x1000aba0
100606ad:	83 c4 08             	add    esp,0x8
100606b0:	85 c0                	test   eax,eax
100606b2:	74 1f                	je     0x100606d3
100606b4:	ff 76 08             	push   DWORD PTR [esi+0x8]
100606b7:	e8 a2 ae 10 00       	call   0x1016b55e
100606bc:	83 c4 04             	add    esp,0x4
100606bf:	89 83 54 01 00 00    	mov    DWORD PTR [ebx+0x154],eax
100606c5:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100606cc:	5f                   	pop    edi
100606cd:	5e                   	pop    esi
100606ce:	5b                   	pop    ebx
100606cf:	5d                   	pop    ebp
100606d0:	c2 04 00             	ret    0x4
100606d3:	68 40 5d 1b 10       	push   0x101b5d40
100606d8:	57                   	push   edi
100606d9:	e8 c2 a4 fa ff       	call   0x1000aba0
100606de:	83 c4 08             	add    esp,0x8
100606e1:	85 c0                	test   eax,eax
100606e3:	74 1f                	je     0x10060704
100606e5:	ff 76 08             	push   DWORD PTR [esi+0x8]
100606e8:	e8 71 ae 10 00       	call   0x1016b55e
100606ed:	83 c4 04             	add    esp,0x4
100606f0:	89 83 58 01 00 00    	mov    DWORD PTR [ebx+0x158],eax
100606f6:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100606fd:	5f                   	pop    edi
100606fe:	5e                   	pop    esi
100606ff:	5b                   	pop    ebx
10060700:	5d                   	pop    ebp
10060701:	c2 04 00             	ret    0x4
10060704:	68 54 5d 1b 10       	push   0x101b5d54
10060709:	57                   	push   edi
1006070a:	e8 91 a4 fa ff       	call   0x1000aba0
1006070f:	83 c4 08             	add    esp,0x8
10060712:	85 c0                	test   eax,eax
10060714:	74 1f                	je     0x10060735
10060716:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060719:	e8 40 ae 10 00       	call   0x1016b55e
1006071e:	83 c4 04             	add    esp,0x4
10060721:	89 83 5c 01 00 00    	mov    DWORD PTR [ebx+0x15c],eax
10060727:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1006072e:	5f                   	pop    edi
1006072f:	5e                   	pop    esi
10060730:	5b                   	pop    ebx
10060731:	5d                   	pop    ebp
10060732:	c2 04 00             	ret    0x4
10060735:	68 68 5d 1b 10       	push   0x101b5d68
1006073a:	57                   	push   edi
1006073b:	e8 60 a4 fa ff       	call   0x1000aba0
10060740:	83 c4 08             	add    esp,0x8
10060743:	85 c0                	test   eax,eax
10060745:	74 1f                	je     0x10060766
10060747:	ff 76 08             	push   DWORD PTR [esi+0x8]
1006074a:	e8 0f ae 10 00       	call   0x1016b55e
1006074f:	83 c4 04             	add    esp,0x4
10060752:	89 83 60 01 00 00    	mov    DWORD PTR [ebx+0x160],eax
10060758:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1006075f:	5f                   	pop    edi
10060760:	5e                   	pop    esi
10060761:	5b                   	pop    ebx
10060762:	5d                   	pop    ebp
10060763:	c2 04 00             	ret    0x4
10060766:	68 7c 5d 1b 10       	push   0x101b5d7c
1006076b:	57                   	push   edi
1006076c:	e8 2f a4 fa ff       	call   0x1000aba0
10060771:	83 c4 08             	add    esp,0x8
10060774:	85 c0                	test   eax,eax
10060776:	74 1f                	je     0x10060797
10060778:	ff 76 08             	push   DWORD PTR [esi+0x8]
1006077b:	e8 de ad 10 00       	call   0x1016b55e
10060780:	83 c4 04             	add    esp,0x4
10060783:	89 83 64 01 00 00    	mov    DWORD PTR [ebx+0x164],eax
10060789:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060790:	5f                   	pop    edi
10060791:	5e                   	pop    esi
10060792:	5b                   	pop    ebx
10060793:	5d                   	pop    ebp
10060794:	c2 04 00             	ret    0x4
10060797:	68 90 5d 1b 10       	push   0x101b5d90
1006079c:	57                   	push   edi
1006079d:	e8 fe a3 fa ff       	call   0x1000aba0
100607a2:	83 c4 08             	add    esp,0x8
100607a5:	85 c0                	test   eax,eax
100607a7:	74 1f                	je     0x100607c8
100607a9:	ff 76 08             	push   DWORD PTR [esi+0x8]
100607ac:	e8 ad ad 10 00       	call   0x1016b55e
100607b1:	83 c4 04             	add    esp,0x4
100607b4:	89 83 68 01 00 00    	mov    DWORD PTR [ebx+0x168],eax
100607ba:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100607c1:	5f                   	pop    edi
100607c2:	5e                   	pop    esi
100607c3:	5b                   	pop    ebx
100607c4:	5d                   	pop    ebp
100607c5:	c2 04 00             	ret    0x4
100607c8:	68 a4 5d 1b 10       	push   0x101b5da4
100607cd:	57                   	push   edi
100607ce:	e8 cd a3 fa ff       	call   0x1000aba0
100607d3:	83 c4 08             	add    esp,0x8
100607d6:	85 c0                	test   eax,eax
100607d8:	74 1f                	je     0x100607f9
100607da:	ff 76 08             	push   DWORD PTR [esi+0x8]
100607dd:	e8 0a ee 10 00       	call   0x1016f5ec
100607e2:	83 c4 04             	add    esp,0x4
100607e5:	d9 9b 70 01 00 00    	fstp   DWORD PTR [ebx+0x170]
100607eb:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100607f2:	5f                   	pop    edi
100607f3:	5e                   	pop    esi
100607f4:	5b                   	pop    ebx
100607f5:	5d                   	pop    ebp
100607f6:	c2 04 00             	ret    0x4
100607f9:	68 b4 5d 1b 10       	push   0x101b5db4
100607fe:	57                   	push   edi
100607ff:	e8 9c a3 fa ff       	call   0x1000aba0
10060804:	83 c4 08             	add    esp,0x8
10060807:	85 c0                	test   eax,eax
10060809:	74 1f                	je     0x1006082a
1006080b:	ff 76 08             	push   DWORD PTR [esi+0x8]
1006080e:	e8 d9 ed 10 00       	call   0x1016f5ec
10060813:	83 c4 04             	add    esp,0x4
10060816:	d9 9b 74 01 00 00    	fstp   DWORD PTR [ebx+0x174]
1006081c:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060823:	5f                   	pop    edi
10060824:	5e                   	pop    esi
10060825:	5b                   	pop    ebx
10060826:	5d                   	pop    ebp
10060827:	c2 04 00             	ret    0x4
1006082a:	68 c4 5d 1b 10       	push   0x101b5dc4
1006082f:	57                   	push   edi
10060830:	e8 6b a3 fa ff       	call   0x1000aba0
10060835:	83 c4 08             	add    esp,0x8
10060838:	85 c0                	test   eax,eax
1006083a:	74 1f                	je     0x1006085b
1006083c:	ff 76 08             	push   DWORD PTR [esi+0x8]
1006083f:	e8 a8 ed 10 00       	call   0x1016f5ec
10060844:	83 c4 04             	add    esp,0x4
10060847:	d9 9b 78 01 00 00    	fstp   DWORD PTR [ebx+0x178]
1006084d:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060854:	5f                   	pop    edi
10060855:	5e                   	pop    esi
10060856:	5b                   	pop    ebx
10060857:	5d                   	pop    ebp
10060858:	c2 04 00             	ret    0x4
1006085b:	68 d4 5d 1b 10       	push   0x101b5dd4
10060860:	57                   	push   edi
10060861:	e8 3a a3 fa ff       	call   0x1000aba0
10060866:	83 c4 08             	add    esp,0x8
10060869:	85 c0                	test   eax,eax
1006086b:	74 1f                	je     0x1006088c
1006086d:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060870:	e8 77 ed 10 00       	call   0x1016f5ec
10060875:	83 c4 04             	add    esp,0x4
10060878:	d9 9b 7c 01 00 00    	fstp   DWORD PTR [ebx+0x17c]
1006087e:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060885:	5f                   	pop    edi
10060886:	5e                   	pop    esi
10060887:	5b                   	pop    ebx
10060888:	5d                   	pop    ebp
10060889:	c2 04 00             	ret    0x4
1006088c:	68 e4 5d 1b 10       	push   0x101b5de4
10060891:	57                   	push   edi
10060892:	e8 09 a3 fa ff       	call   0x1000aba0
10060897:	83 c4 08             	add    esp,0x8
1006089a:	85 c0                	test   eax,eax
1006089c:	74 1f                	je     0x100608bd
1006089e:	ff 76 08             	push   DWORD PTR [esi+0x8]
100608a1:	e8 46 ed 10 00       	call   0x1016f5ec
100608a6:	83 c4 04             	add    esp,0x4
100608a9:	d9 9b 80 01 00 00    	fstp   DWORD PTR [ebx+0x180]
100608af:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100608b6:	5f                   	pop    edi
100608b7:	5e                   	pop    esi
100608b8:	5b                   	pop    ebx
100608b9:	5d                   	pop    ebp
100608ba:	c2 04 00             	ret    0x4
100608bd:	68 f4 5d 1b 10       	push   0x101b5df4
100608c2:	57                   	push   edi
100608c3:	e8 d8 a2 fa ff       	call   0x1000aba0
100608c8:	83 c4 08             	add    esp,0x8
100608cb:	85 c0                	test   eax,eax
100608cd:	74 1f                	je     0x100608ee
100608cf:	ff 76 08             	push   DWORD PTR [esi+0x8]
100608d2:	e8 15 ed 10 00       	call   0x1016f5ec
100608d7:	83 c4 04             	add    esp,0x4
100608da:	d9 9b 84 01 00 00    	fstp   DWORD PTR [ebx+0x184]
100608e0:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100608e7:	5f                   	pop    edi
100608e8:	5e                   	pop    esi
100608e9:	5b                   	pop    ebx
100608ea:	5d                   	pop    ebp
100608eb:	c2 04 00             	ret    0x4
100608ee:	68 04 5e 1b 10       	push   0x101b5e04
100608f3:	57                   	push   edi
100608f4:	e8 a7 a2 fa ff       	call   0x1000aba0
100608f9:	83 c4 08             	add    esp,0x8
100608fc:	85 c0                	test   eax,eax
100608fe:	74 1f                	je     0x1006091f
10060900:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060903:	e8 e4 ec 10 00       	call   0x1016f5ec
10060908:	83 c4 04             	add    esp,0x4
1006090b:	d9 9b 88 01 00 00    	fstp   DWORD PTR [ebx+0x188]
10060911:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060918:	5f                   	pop    edi
10060919:	5e                   	pop    esi
1006091a:	5b                   	pop    ebx
1006091b:	5d                   	pop    ebp
1006091c:	c2 04 00             	ret    0x4
1006091f:	68 14 5e 1b 10       	push   0x101b5e14
10060924:	57                   	push   edi
10060925:	e8 76 a2 fa ff       	call   0x1000aba0
1006092a:	83 c4 08             	add    esp,0x8
1006092d:	85 c0                	test   eax,eax
1006092f:	74 1f                	je     0x10060950
10060931:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060934:	e8 b3 ec 10 00       	call   0x1016f5ec
10060939:	83 c4 04             	add    esp,0x4
1006093c:	d9 9b 8c 01 00 00    	fstp   DWORD PTR [ebx+0x18c]
10060942:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060949:	5f                   	pop    edi
1006094a:	5e                   	pop    esi
1006094b:	5b                   	pop    ebx
1006094c:	5d                   	pop    ebp
1006094d:	c2 04 00             	ret    0x4
10060950:	68 24 5e 1b 10       	push   0x101b5e24
10060955:	57                   	push   edi
10060956:	e8 45 a2 fa ff       	call   0x1000aba0
1006095b:	83 c4 08             	add    esp,0x8
1006095e:	85 c0                	test   eax,eax
10060960:	74 1f                	je     0x10060981
10060962:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060965:	e8 82 ec 10 00       	call   0x1016f5ec
1006096a:	83 c4 04             	add    esp,0x4
1006096d:	d9 9b 90 01 00 00    	fstp   DWORD PTR [ebx+0x190]
10060973:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1006097a:	5f                   	pop    edi
1006097b:	5e                   	pop    esi
1006097c:	5b                   	pop    ebx
1006097d:	5d                   	pop    ebp
1006097e:	c2 04 00             	ret    0x4
10060981:	68 34 5e 1b 10       	push   0x101b5e34
10060986:	57                   	push   edi
10060987:	e8 14 a2 fa ff       	call   0x1000aba0
1006098c:	83 c4 08             	add    esp,0x8
1006098f:	85 c0                	test   eax,eax
10060991:	74 1f                	je     0x100609b2
10060993:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060996:	e8 51 ec 10 00       	call   0x1016f5ec
1006099b:	83 c4 04             	add    esp,0x4
1006099e:	d9 9b 94 01 00 00    	fstp   DWORD PTR [ebx+0x194]
100609a4:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100609ab:	5f                   	pop    edi
100609ac:	5e                   	pop    esi
100609ad:	5b                   	pop    ebx
100609ae:	5d                   	pop    ebp
100609af:	c2 04 00             	ret    0x4
100609b2:	68 44 5e 1b 10       	push   0x101b5e44
100609b7:	57                   	push   edi
100609b8:	e8 e3 a1 fa ff       	call   0x1000aba0
100609bd:	83 c4 08             	add    esp,0x8
100609c0:	85 c0                	test   eax,eax
100609c2:	74 1f                	je     0x100609e3
100609c4:	ff 76 08             	push   DWORD PTR [esi+0x8]
100609c7:	e8 20 ec 10 00       	call   0x1016f5ec
100609cc:	83 c4 04             	add    esp,0x4
100609cf:	d9 9b 98 01 00 00    	fstp   DWORD PTR [ebx+0x198]
100609d5:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100609dc:	5f                   	pop    edi
100609dd:	5e                   	pop    esi
100609de:	5b                   	pop    ebx
100609df:	5d                   	pop    ebp
100609e0:	c2 04 00             	ret    0x4
100609e3:	68 54 5e 1b 10       	push   0x101b5e54
100609e8:	57                   	push   edi
100609e9:	e8 b2 a1 fa ff       	call   0x1000aba0
100609ee:	83 c4 08             	add    esp,0x8
100609f1:	85 c0                	test   eax,eax
100609f3:	74 1f                	je     0x10060a14
100609f5:	ff 76 08             	push   DWORD PTR [esi+0x8]
100609f8:	e8 ef eb 10 00       	call   0x1016f5ec
100609fd:	83 c4 04             	add    esp,0x4
10060a00:	d9 9b 9c 01 00 00    	fstp   DWORD PTR [ebx+0x19c]
10060a06:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060a0d:	5f                   	pop    edi
10060a0e:	5e                   	pop    esi
10060a0f:	5b                   	pop    ebx
10060a10:	5d                   	pop    ebp
10060a11:	c2 04 00             	ret    0x4
10060a14:	68 64 5e 1b 10       	push   0x101b5e64
10060a19:	57                   	push   edi
10060a1a:	e8 81 a1 fa ff       	call   0x1000aba0
10060a1f:	83 c4 08             	add    esp,0x8
10060a22:	85 c0                	test   eax,eax
10060a24:	74 1f                	je     0x10060a45
10060a26:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060a29:	e8 be eb 10 00       	call   0x1016f5ec
10060a2e:	83 c4 04             	add    esp,0x4
10060a31:	d9 9b a0 01 00 00    	fstp   DWORD PTR [ebx+0x1a0]
10060a37:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060a3e:	5f                   	pop    edi
10060a3f:	5e                   	pop    esi
10060a40:	5b                   	pop    ebx
10060a41:	5d                   	pop    ebp
10060a42:	c2 04 00             	ret    0x4
10060a45:	68 74 5e 1b 10       	push   0x101b5e74
10060a4a:	57                   	push   edi
10060a4b:	e8 50 a1 fa ff       	call   0x1000aba0
10060a50:	83 c4 08             	add    esp,0x8
10060a53:	85 c0                	test   eax,eax
10060a55:	74 1f                	je     0x10060a76
10060a57:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060a5a:	e8 8d eb 10 00       	call   0x1016f5ec
10060a5f:	83 c4 04             	add    esp,0x4
10060a62:	d9 9b a4 01 00 00    	fstp   DWORD PTR [ebx+0x1a4]
10060a68:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060a6f:	5f                   	pop    edi
10060a70:	5e                   	pop    esi
10060a71:	5b                   	pop    ebx
10060a72:	5d                   	pop    ebp
10060a73:	c2 04 00             	ret    0x4
10060a76:	68 84 5e 1b 10       	push   0x101b5e84
10060a7b:	57                   	push   edi
10060a7c:	e8 1f a1 fa ff       	call   0x1000aba0
10060a81:	83 c4 08             	add    esp,0x8
10060a84:	85 c0                	test   eax,eax
10060a86:	74 1f                	je     0x10060aa7
10060a88:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060a8b:	e8 5c eb 10 00       	call   0x1016f5ec
10060a90:	83 c4 04             	add    esp,0x4
10060a93:	d9 9b a8 01 00 00    	fstp   DWORD PTR [ebx+0x1a8]
10060a99:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060aa0:	5f                   	pop    edi
10060aa1:	5e                   	pop    esi
10060aa2:	5b                   	pop    ebx
10060aa3:	5d                   	pop    ebp
10060aa4:	c2 04 00             	ret    0x4
10060aa7:	68 94 5e 1b 10       	push   0x101b5e94
10060aac:	57                   	push   edi
10060aad:	e8 ee a0 fa ff       	call   0x1000aba0
10060ab2:	83 c4 08             	add    esp,0x8
10060ab5:	85 c0                	test   eax,eax
10060ab7:	74 1f                	je     0x10060ad8
10060ab9:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060abc:	e8 2b eb 10 00       	call   0x1016f5ec
10060ac1:	83 c4 04             	add    esp,0x4
10060ac4:	d9 9b ac 01 00 00    	fstp   DWORD PTR [ebx+0x1ac]
10060aca:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060ad1:	5f                   	pop    edi
10060ad2:	5e                   	pop    esi
10060ad3:	5b                   	pop    ebx
10060ad4:	5d                   	pop    ebp
10060ad5:	c2 04 00             	ret    0x4
10060ad8:	68 a4 5e 1b 10       	push   0x101b5ea4
10060add:	57                   	push   edi
10060ade:	e8 bd a0 fa ff       	call   0x1000aba0
10060ae3:	83 c4 08             	add    esp,0x8
10060ae6:	85 c0                	test   eax,eax
10060ae8:	74 1f                	je     0x10060b09
10060aea:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060aed:	e8 fa ea 10 00       	call   0x1016f5ec
10060af2:	83 c4 04             	add    esp,0x4
10060af5:	d9 9b b0 01 00 00    	fstp   DWORD PTR [ebx+0x1b0]
10060afb:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060b02:	5f                   	pop    edi
10060b03:	5e                   	pop    esi
10060b04:	5b                   	pop    ebx
10060b05:	5d                   	pop    ebp
10060b06:	c2 04 00             	ret    0x4
10060b09:	68 b4 5e 1b 10       	push   0x101b5eb4
10060b0e:	57                   	push   edi
10060b0f:	e8 8c a0 fa ff       	call   0x1000aba0
10060b14:	83 c4 08             	add    esp,0x8
10060b17:	85 c0                	test   eax,eax
10060b19:	74 1f                	je     0x10060b3a
10060b1b:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060b1e:	e8 c9 ea 10 00       	call   0x1016f5ec
10060b23:	83 c4 04             	add    esp,0x4
10060b26:	d9 9b b4 01 00 00    	fstp   DWORD PTR [ebx+0x1b4]
10060b2c:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060b33:	5f                   	pop    edi
10060b34:	5e                   	pop    esi
10060b35:	5b                   	pop    ebx
10060b36:	5d                   	pop    ebp
10060b37:	c2 04 00             	ret    0x4
10060b3a:	68 c4 5e 1b 10       	push   0x101b5ec4
10060b3f:	57                   	push   edi
10060b40:	e8 5b a0 fa ff       	call   0x1000aba0
10060b45:	83 c4 08             	add    esp,0x8
10060b48:	85 c0                	test   eax,eax
10060b4a:	74 1f                	je     0x10060b6b
10060b4c:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060b4f:	e8 98 ea 10 00       	call   0x1016f5ec
10060b54:	83 c4 04             	add    esp,0x4
10060b57:	d9 9b b8 01 00 00    	fstp   DWORD PTR [ebx+0x1b8]
10060b5d:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060b64:	5f                   	pop    edi
10060b65:	5e                   	pop    esi
10060b66:	5b                   	pop    ebx
10060b67:	5d                   	pop    ebp
10060b68:	c2 04 00             	ret    0x4
10060b6b:	68 d4 5e 1b 10       	push   0x101b5ed4
10060b70:	57                   	push   edi
10060b71:	e8 2a a0 fa ff       	call   0x1000aba0
10060b76:	83 c4 08             	add    esp,0x8
10060b79:	85 c0                	test   eax,eax
10060b7b:	74 1f                	je     0x10060b9c
10060b7d:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060b80:	e8 67 ea 10 00       	call   0x1016f5ec
10060b85:	83 c4 04             	add    esp,0x4
10060b88:	d9 9b bc 01 00 00    	fstp   DWORD PTR [ebx+0x1bc]
10060b8e:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060b95:	5f                   	pop    edi
10060b96:	5e                   	pop    esi
10060b97:	5b                   	pop    ebx
10060b98:	5d                   	pop    ebp
10060b99:	c2 04 00             	ret    0x4
10060b9c:	68 e4 5e 1b 10       	push   0x101b5ee4
10060ba1:	57                   	push   edi
10060ba2:	e8 f9 9f fa ff       	call   0x1000aba0
10060ba7:	83 c4 08             	add    esp,0x8
10060baa:	85 c0                	test   eax,eax
10060bac:	74 1f                	je     0x10060bcd
10060bae:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060bb1:	e8 36 ea 10 00       	call   0x1016f5ec
10060bb6:	83 c4 04             	add    esp,0x4
10060bb9:	d9 9b c0 01 00 00    	fstp   DWORD PTR [ebx+0x1c0]
10060bbf:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060bc6:	5f                   	pop    edi
10060bc7:	5e                   	pop    esi
10060bc8:	5b                   	pop    ebx
10060bc9:	5d                   	pop    ebp
10060bca:	c2 04 00             	ret    0x4
10060bcd:	68 f4 5e 1b 10       	push   0x101b5ef4
10060bd2:	57                   	push   edi
10060bd3:	e8 c8 9f fa ff       	call   0x1000aba0
10060bd8:	83 c4 08             	add    esp,0x8
10060bdb:	85 c0                	test   eax,eax
10060bdd:	74 1f                	je     0x10060bfe
10060bdf:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060be2:	e8 05 ea 10 00       	call   0x1016f5ec
10060be7:	83 c4 04             	add    esp,0x4
10060bea:	d9 9b c4 01 00 00    	fstp   DWORD PTR [ebx+0x1c4]
10060bf0:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060bf7:	5f                   	pop    edi
10060bf8:	5e                   	pop    esi
10060bf9:	5b                   	pop    ebx
10060bfa:	5d                   	pop    ebp
10060bfb:	c2 04 00             	ret    0x4
10060bfe:	68 04 5f 1b 10       	push   0x101b5f04
10060c03:	57                   	push   edi
10060c04:	e8 97 9f fa ff       	call   0x1000aba0
10060c09:	83 c4 08             	add    esp,0x8
10060c0c:	85 c0                	test   eax,eax
10060c0e:	74 1f                	je     0x10060c2f
10060c10:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060c13:	e8 d4 e9 10 00       	call   0x1016f5ec
10060c18:	83 c4 04             	add    esp,0x4
10060c1b:	d9 9b c8 01 00 00    	fstp   DWORD PTR [ebx+0x1c8]
10060c21:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060c28:	5f                   	pop    edi
10060c29:	5e                   	pop    esi
10060c2a:	5b                   	pop    ebx
10060c2b:	5d                   	pop    ebp
10060c2c:	c2 04 00             	ret    0x4
10060c2f:	68 14 5f 1b 10       	push   0x101b5f14
10060c34:	57                   	push   edi
10060c35:	e8 66 9f fa ff       	call   0x1000aba0
10060c3a:	83 c4 08             	add    esp,0x8
10060c3d:	85 c0                	test   eax,eax
10060c3f:	74 1f                	je     0x10060c60
10060c41:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060c44:	e8 a3 e9 10 00       	call   0x1016f5ec
10060c49:	83 c4 04             	add    esp,0x4
10060c4c:	d9 9b cc 01 00 00    	fstp   DWORD PTR [ebx+0x1cc]
10060c52:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060c59:	5f                   	pop    edi
10060c5a:	5e                   	pop    esi
10060c5b:	5b                   	pop    ebx
10060c5c:	5d                   	pop    ebp
10060c5d:	c2 04 00             	ret    0x4
10060c60:	68 24 5f 1b 10       	push   0x101b5f24
10060c65:	57                   	push   edi
10060c66:	e8 35 9f fa ff       	call   0x1000aba0
10060c6b:	83 c4 08             	add    esp,0x8
10060c6e:	85 c0                	test   eax,eax
10060c70:	74 1f                	je     0x10060c91
10060c72:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060c75:	e8 72 e9 10 00       	call   0x1016f5ec
10060c7a:	83 c4 04             	add    esp,0x4
10060c7d:	d9 9b d0 01 00 00    	fstp   DWORD PTR [ebx+0x1d0]
10060c83:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060c8a:	5f                   	pop    edi
10060c8b:	5e                   	pop    esi
10060c8c:	5b                   	pop    ebx
10060c8d:	5d                   	pop    ebp
10060c8e:	c2 04 00             	ret    0x4
10060c91:	68 34 5f 1b 10       	push   0x101b5f34
10060c96:	57                   	push   edi
10060c97:	e8 04 9f fa ff       	call   0x1000aba0
10060c9c:	83 c4 08             	add    esp,0x8
10060c9f:	85 c0                	test   eax,eax
10060ca1:	74 1f                	je     0x10060cc2
10060ca3:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060ca6:	e8 41 e9 10 00       	call   0x1016f5ec
10060cab:	83 c4 04             	add    esp,0x4
10060cae:	d9 9b d4 01 00 00    	fstp   DWORD PTR [ebx+0x1d4]
10060cb4:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060cbb:	5f                   	pop    edi
10060cbc:	5e                   	pop    esi
10060cbd:	5b                   	pop    ebx
10060cbe:	5d                   	pop    ebp
10060cbf:	c2 04 00             	ret    0x4
10060cc2:	68 44 5f 1b 10       	push   0x101b5f44
10060cc7:	57                   	push   edi
10060cc8:	e8 d3 9e fa ff       	call   0x1000aba0
10060ccd:	83 c4 08             	add    esp,0x8
10060cd0:	85 c0                	test   eax,eax
10060cd2:	74 1f                	je     0x10060cf3
10060cd4:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060cd7:	e8 10 e9 10 00       	call   0x1016f5ec
10060cdc:	83 c4 04             	add    esp,0x4
10060cdf:	d9 9b d8 01 00 00    	fstp   DWORD PTR [ebx+0x1d8]
10060ce5:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060cec:	5f                   	pop    edi
10060ced:	5e                   	pop    esi
10060cee:	5b                   	pop    ebx
10060cef:	5d                   	pop    ebp
10060cf0:	c2 04 00             	ret    0x4
10060cf3:	68 54 5f 1b 10       	push   0x101b5f54
10060cf8:	57                   	push   edi
10060cf9:	e8 a2 9e fa ff       	call   0x1000aba0
10060cfe:	83 c4 08             	add    esp,0x8
10060d01:	85 c0                	test   eax,eax
10060d03:	74 1f                	je     0x10060d24
10060d05:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060d08:	e8 df e8 10 00       	call   0x1016f5ec
10060d0d:	83 c4 04             	add    esp,0x4
10060d10:	d9 9b dc 01 00 00    	fstp   DWORD PTR [ebx+0x1dc]
10060d16:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060d1d:	5f                   	pop    edi
10060d1e:	5e                   	pop    esi
10060d1f:	5b                   	pop    ebx
10060d20:	5d                   	pop    ebp
10060d21:	c2 04 00             	ret    0x4
10060d24:	68 64 5f 1b 10       	push   0x101b5f64
10060d29:	57                   	push   edi
10060d2a:	e8 71 9e fa ff       	call   0x1000aba0
10060d2f:	83 c4 08             	add    esp,0x8
10060d32:	85 c0                	test   eax,eax
10060d34:	74 1f                	je     0x10060d55
10060d36:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060d39:	e8 ae e8 10 00       	call   0x1016f5ec
10060d3e:	83 c4 04             	add    esp,0x4
10060d41:	d9 9b e0 01 00 00    	fstp   DWORD PTR [ebx+0x1e0]
10060d47:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060d4e:	5f                   	pop    edi
10060d4f:	5e                   	pop    esi
10060d50:	5b                   	pop    ebx
10060d51:	5d                   	pop    ebp
10060d52:	c2 04 00             	ret    0x4
10060d55:	68 74 5f 1b 10       	push   0x101b5f74
10060d5a:	57                   	push   edi
10060d5b:	e8 40 9e fa ff       	call   0x1000aba0
10060d60:	83 c4 08             	add    esp,0x8
10060d63:	85 c0                	test   eax,eax
10060d65:	74 1f                	je     0x10060d86
10060d67:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060d6a:	e8 7d e8 10 00       	call   0x1016f5ec
10060d6f:	83 c4 04             	add    esp,0x4
10060d72:	d9 9b e4 01 00 00    	fstp   DWORD PTR [ebx+0x1e4]
10060d78:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060d7f:	5f                   	pop    edi
10060d80:	5e                   	pop    esi
10060d81:	5b                   	pop    ebx
10060d82:	5d                   	pop    ebp
10060d83:	c2 04 00             	ret    0x4
10060d86:	68 84 5f 1b 10       	push   0x101b5f84
10060d8b:	57                   	push   edi
10060d8c:	e8 0f 9e fa ff       	call   0x1000aba0
10060d91:	83 c4 08             	add    esp,0x8
10060d94:	85 c0                	test   eax,eax
10060d96:	74 1f                	je     0x10060db7
10060d98:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060d9b:	e8 4c e8 10 00       	call   0x1016f5ec
10060da0:	83 c4 04             	add    esp,0x4
10060da3:	d9 9b e8 01 00 00    	fstp   DWORD PTR [ebx+0x1e8]
10060da9:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060db0:	5f                   	pop    edi
10060db1:	5e                   	pop    esi
10060db2:	5b                   	pop    ebx
10060db3:	5d                   	pop    ebp
10060db4:	c2 04 00             	ret    0x4
10060db7:	68 94 5f 1b 10       	push   0x101b5f94
10060dbc:	57                   	push   edi
10060dbd:	e8 de 9d fa ff       	call   0x1000aba0
10060dc2:	83 c4 08             	add    esp,0x8
10060dc5:	85 c0                	test   eax,eax
10060dc7:	74 1f                	je     0x10060de8
10060dc9:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060dcc:	e8 1b e8 10 00       	call   0x1016f5ec
10060dd1:	83 c4 04             	add    esp,0x4
10060dd4:	d9 9b ec 01 00 00    	fstp   DWORD PTR [ebx+0x1ec]
10060dda:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060de1:	5f                   	pop    edi
10060de2:	5e                   	pop    esi
10060de3:	5b                   	pop    ebx
10060de4:	5d                   	pop    ebp
10060de5:	c2 04 00             	ret    0x4
10060de8:	68 a4 5f 1b 10       	push   0x101b5fa4
10060ded:	57                   	push   edi
10060dee:	e8 ad 9d fa ff       	call   0x1000aba0
10060df3:	83 c4 08             	add    esp,0x8
10060df6:	85 c0                	test   eax,eax
10060df8:	74 20                	je     0x10060e1a
10060dfa:	ff 76 08             	push   DWORD PTR [esi+0x8]
10060dfd:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10060e03:	83 c4 04             	add    esp,0x4
10060e06:	89 83 f0 01 00 00    	mov    DWORD PTR [ebx+0x1f0],eax
10060e0c:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10060e13:	5f                   	pop    edi
10060e14:	5e                   	pop    esi
10060e15:	5b                   	pop    ebx
10060e16:	5d                   	pop    ebp
10060e17:	c2 04 00             	ret    0x4
10060e1a:	56                   	push   esi
10060e1b:	8b cb                	mov    ecx,ebx
10060e1d:	e8 7e cd fa ff       	call   0x1000dba0
10060e22:	5f                   	pop    edi
10060e23:	5e                   	pop    esi
10060e24:	5b                   	pop    ebx
10060e25:	5d                   	pop    ebp
10060e26:	c2 04 00             	ret    0x4
