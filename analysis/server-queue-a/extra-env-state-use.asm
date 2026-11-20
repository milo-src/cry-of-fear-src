
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10016070 <.text+0x15070>:
10016070:	55                   	push   ebp
10016071:	8b ec                	mov    ebp,esp
10016073:	56                   	push   esi
10016074:	8b 75 10             	mov    esi,DWORD PTR [ebp+0x10]
10016077:	57                   	push   edi
10016078:	56                   	push   esi
10016079:	8b f9                	mov    edi,ecx
1001607b:	e8 d0 22 00 00       	call   0x10018350
10016080:	85 c0                	test   eax,eax
10016082:	0f 84 51 03 00 00    	je     0x100163d9
10016088:	6a 00                	push   0x0
1001608a:	ff b7 e8 00 00 00    	push   DWORD PTR [edi+0xe8]
10016090:	e8 cb 2f 10 00       	call   0x10119060
10016095:	83 c4 08             	add    esp,0x8
10016098:	85 c0                	test   eax,eax
1001609a:	0f 84 39 03 00 00    	je     0x100163d9
100160a0:	8b 07                	mov    eax,DWORD PTR [edi]
100160a2:	8b cf                	mov    ecx,edi
100160a4:	ff 50 5c             	call   DWORD PTR [eax+0x5c]
100160a7:	83 f8 03             	cmp    eax,0x3
100160aa:	0f 87 e9 03 00 00    	ja     0x10016499
100160b0:	ff 24 85 a0 64 01 10 	jmp    DWORD PTR [eax*4+0x100164a0]
100160b7:	f3 0f 10 8f e4 00 00 	movss  xmm1,DWORD PTR [edi+0xe4]
100160be:	00 
100160bf:	0f 57 c0             	xorps  xmm0,xmm0
100160c2:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100160c5:	0f 2e c8             	ucomiss xmm1,xmm0
100160c8:	9f                   	lahf
100160c9:	f6 c4 44             	test   ah,0x44
100160cc:	7b 5b                	jnp    0x10016129
100160ce:	c7 87 dc 00 00 00 03 	mov    DWORD PTR [edi+0xdc],0x3
100160d5:	00 00 00 
100160d8:	f6 81 a4 01 00 00 02 	test   BYTE PTR [ecx+0x1a4],0x2
100160df:	74 35                	je     0x10016116
100160e1:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100160e6:	83 ec 08             	sub    esp,0x8
100160e9:	8b 89 d0 01 00 00    	mov    ecx,DWORD PTR [ecx+0x1d0]
100160ef:	0f 5a c1             	cvtps2pd xmm0,xmm1
100160f2:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100160f8:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
100160fd:	51                   	push   ecx
100160fe:	68 50 53 1a 10       	push   0x101a5350
10016103:	6a 01                	push   0x1
10016105:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1001610b:	f3 0f 10 8f e4 00 00 	movss  xmm1,DWORD PTR [edi+0xe4]
10016112:	00 
10016113:	83 c4 14             	add    esp,0x14
10016116:	8b 07                	mov    eax,DWORD PTR [edi]
10016118:	51                   	push   ecx
10016119:	8b cf                	mov    ecx,edi
1001611b:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
10016120:	ff 50 08             	call   DWORD PTR [eax+0x8]
10016123:	5f                   	pop    edi
10016124:	5e                   	pop    esi
10016125:	5d                   	pop    ebp
10016126:	c2 10 00             	ret    0x10
10016129:	c7 87 dc 00 00 00 00 	mov    DWORD PTR [edi+0xdc],0x0
10016130:	00 00 00 
10016133:	f6 81 a4 01 00 00 02 	test   BYTE PTR [ecx+0x1a4],0x2
1001613a:	0f 84 a7 00 00 00    	je     0x100161e7
10016140:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10016145:	8b 89 d0 01 00 00    	mov    ecx,DWORD PTR [ecx+0x1d0]
1001614b:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
10016151:	51                   	push   ecx
10016152:	68 90 53 1a 10       	push   0x101a5390
10016157:	6a 01                	push   0x1
10016159:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1001615f:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
10016162:	83 c4 0c             	add    esp,0xc
10016165:	8b 91 cc 01 00 00    	mov    edx,DWORD PTR [ecx+0x1cc]
1001616b:	85 d2                	test   edx,edx
1001616d:	74 40                	je     0x100161af
1001616f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10016174:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1001617a:	03 c2                	add    eax,edx
1001617c:	50                   	push   eax
1001617d:	68 bc 53 1a 10       	push   0x101a53bc
10016182:	6a 01                	push   0x1
10016184:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1001618a:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1001618d:	83 c4 0c             	add    esp,0xc
10016190:	8b 88 f4 01 00 00    	mov    ecx,DWORD PTR [eax+0x1f4]
10016196:	85 c9                	test   ecx,ecx
10016198:	74 3d                	je     0x100161d7
1001619a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001619f:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100161a5:	03 c1                	add    eax,ecx
100161a7:	50                   	push   eax
100161a8:	68 cc 53 1a 10       	push   0x101a53cc
100161ad:	eb 1d                	jmp    0x100161cc
100161af:	8b 89 f4 01 00 00    	mov    ecx,DWORD PTR [ecx+0x1f4]
100161b5:	85 c9                	test   ecx,ecx
100161b7:	74 1e                	je     0x100161d7
100161b9:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100161be:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100161c4:	03 c1                	add    eax,ecx
100161c6:	50                   	push   eax
100161c7:	68 bc 53 1a 10       	push   0x101a53bc
100161cc:	6a 01                	push   0x1
100161ce:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100161d4:	83 c4 0c             	add    esp,0xc
100161d7:	68 d8 53 1a 10       	push   0x101a53d8
100161dc:	6a 01                	push   0x1
100161de:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100161e4:	83 c4 08             	add    esp,0x8
100161e7:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100161ea:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100161ed:	51                   	push   ecx
100161ee:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100161f5:	8b 88 cc 01 00 00    	mov    ecx,DWORD PTR [eax+0x1cc]
100161fb:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10016200:	6a 00                	push   0x0
10016202:	57                   	push   edi
10016203:	56                   	push   esi
10016204:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1001620a:	51                   	push   ecx
1001620b:	e8 e0 bd 0e 00       	call   0x10101ff0
10016210:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10016213:	83 c4 10             	add    esp,0x10
10016216:	8b 88 f4 01 00 00    	mov    ecx,DWORD PTR [eax+0x1f4]
1001621c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10016221:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
10016228:	6a 03                	push   0x3
1001622a:	57                   	push   edi
1001622b:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
10016231:	56                   	push   esi
10016232:	51                   	push   ecx
10016233:	e8 b8 bd 0e 00       	call   0x10101ff0
10016238:	83 c4 14             	add    esp,0x14
1001623b:	8b cf                	mov    ecx,edi
1001623d:	e8 8e 18 00 00       	call   0x10017ad0
10016242:	5f                   	pop    edi
10016243:	5e                   	pop    esi
10016244:	5d                   	pop    ebp
10016245:	c2 10 00             	ret    0x10
10016248:	f3 0f 10 8f e0 00 00 	movss  xmm1,DWORD PTR [edi+0xe0]
1001624f:	00 
10016250:	0f 57 c0             	xorps  xmm0,xmm0
10016253:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
10016256:	0f 2e c8             	ucomiss xmm1,xmm0
10016259:	9f                   	lahf
1001625a:	f6 c4 44             	test   ah,0x44
1001625d:	7b 5b                	jnp    0x100162ba
1001625f:	c7 87 dc 00 00 00 01 	mov    DWORD PTR [edi+0xdc],0x1
10016266:	00 00 00 
10016269:	f6 81 a4 01 00 00 02 	test   BYTE PTR [ecx+0x1a4],0x2
10016270:	74 35                	je     0x100162a7
10016272:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10016277:	83 ec 08             	sub    esp,0x8
1001627a:	8b 89 d0 01 00 00    	mov    ecx,DWORD PTR [ecx+0x1d0]
10016280:	0f 5a c1             	cvtps2pd xmm0,xmm1
10016283:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
10016289:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
1001628e:	51                   	push   ecx
1001628f:	68 dc 53 1a 10       	push   0x101a53dc
10016294:	6a 01                	push   0x1
10016296:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1001629c:	f3 0f 10 8f e0 00 00 	movss  xmm1,DWORD PTR [edi+0xe0]
100162a3:	00 
100162a4:	83 c4 14             	add    esp,0x14
100162a7:	8b 07                	mov    eax,DWORD PTR [edi]
100162a9:	51                   	push   ecx
100162aa:	8b cf                	mov    ecx,edi
100162ac:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
100162b1:	ff 50 08             	call   DWORD PTR [eax+0x8]
100162b4:	5f                   	pop    edi
100162b5:	5e                   	pop    esi
100162b6:	5d                   	pop    ebp
100162b7:	c2 10 00             	ret    0x10
100162ba:	c7 87 dc 00 00 00 02 	mov    DWORD PTR [edi+0xdc],0x2
100162c1:	00 00 00 
100162c4:	f6 81 a4 01 00 00 02 	test   BYTE PTR [ecx+0x1a4],0x2
100162cb:	0f 84 a7 00 00 00    	je     0x10016378
100162d1:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100162d6:	8b 89 d0 01 00 00    	mov    ecx,DWORD PTR [ecx+0x1d0]
100162dc:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100162e2:	51                   	push   ecx
100162e3:	68 1c 54 1a 10       	push   0x101a541c
100162e8:	6a 01                	push   0x1
100162ea:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100162f0:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100162f3:	83 c4 0c             	add    esp,0xc
100162f6:	8b 91 cc 01 00 00    	mov    edx,DWORD PTR [ecx+0x1cc]
100162fc:	85 d2                	test   edx,edx
100162fe:	74 40                	je     0x10016340
10016300:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10016305:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1001630b:	03 c2                	add    eax,edx
1001630d:	50                   	push   eax
1001630e:	68 bc 53 1a 10       	push   0x101a53bc
10016313:	6a 01                	push   0x1
10016315:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1001631b:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1001631e:	83 c4 0c             	add    esp,0xc
10016321:	8b 88 f0 01 00 00    	mov    ecx,DWORD PTR [eax+0x1f0]
10016327:	85 c9                	test   ecx,ecx
10016329:	74 3d                	je     0x10016368
1001632b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10016330:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10016336:	03 c1                	add    eax,ecx
10016338:	50                   	push   eax
10016339:	68 cc 53 1a 10       	push   0x101a53cc
1001633e:	eb 1d                	jmp    0x1001635d
10016340:	8b 89 f0 01 00 00    	mov    ecx,DWORD PTR [ecx+0x1f0]
10016346:	85 c9                	test   ecx,ecx
10016348:	74 1e                	je     0x10016368
1001634a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001634f:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10016355:	03 c1                	add    eax,ecx
10016357:	50                   	push   eax
10016358:	68 bc 53 1a 10       	push   0x101a53bc
1001635d:	6a 01                	push   0x1
1001635f:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10016365:	83 c4 0c             	add    esp,0xc
10016368:	68 d8 53 1a 10       	push   0x101a53d8
1001636d:	6a 01                	push   0x1
1001636f:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10016375:	83 c4 08             	add    esp,0x8
10016378:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1001637b:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1001637e:	51                   	push   ecx
1001637f:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
10016386:	8b 88 cc 01 00 00    	mov    ecx,DWORD PTR [eax+0x1cc]
1001638c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10016391:	6a 01                	push   0x1
10016393:	57                   	push   edi
10016394:	56                   	push   esi
10016395:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1001639b:	51                   	push   ecx
1001639c:	e8 4f bc 0e 00       	call   0x10101ff0
100163a1:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100163a4:	83 c4 10             	add    esp,0x10
100163a7:	8b 88 f0 01 00 00    	mov    ecx,DWORD PTR [eax+0x1f0]
100163ad:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100163b2:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100163b9:	6a 03                	push   0x3
100163bb:	57                   	push   edi
100163bc:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100163c2:	56                   	push   esi
100163c3:	51                   	push   ecx
100163c4:	e8 27 bc 0e 00       	call   0x10101ff0
100163c9:	83 c4 14             	add    esp,0x14
100163cc:	8b cf                	mov    ecx,edi
100163ce:	e8 fd 16 00 00       	call   0x10017ad0
100163d3:	5f                   	pop    edi
100163d4:	5e                   	pop    esi
100163d5:	5d                   	pop    ebp
100163d6:	c2 10 00             	ret    0x10
100163d9:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100163dc:	f6 81 a4 01 00 00 02 	test   BYTE PTR [ecx+0x1a4],0x2
100163e3:	0f 84 b0 00 00 00    	je     0x10016499
100163e9:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100163ee:	8b 89 d0 01 00 00    	mov    ecx,DWORD PTR [ecx+0x1d0]
100163f4:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100163fa:	51                   	push   ecx
100163fb:	68 a8 52 1a 10       	push   0x101a52a8
10016400:	6a 01                	push   0x1
10016402:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10016408:	6a 00                	push   0x0
1001640a:	ff b7 e8 00 00 00    	push   DWORD PTR [edi+0xe8]
10016410:	e8 4b 2c 10 00       	call   0x10119060
10016415:	83 c4 14             	add    esp,0x14
10016418:	85 c0                	test   eax,eax
1001641a:	75 32                	jne    0x1001644e
1001641c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10016421:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10016427:	03 87 e8 00 00 00    	add    eax,DWORD PTR [edi+0xe8]
1001642d:	50                   	push   eax
1001642e:	56                   	push   esi
1001642f:	e8 7c 04 10 00       	call   0x101168b0
10016434:	83 c4 04             	add    esp,0x4
10016437:	50                   	push   eax
10016438:	68 c0 52 1a 10       	push   0x101a52c0
1001643d:	6a 01                	push   0x1
1001643f:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10016445:	83 c4 10             	add    esp,0x10
10016448:	5f                   	pop    edi
10016449:	5e                   	pop    esi
1001644a:	5d                   	pop    ebp
1001644b:	c2 10 00             	ret    0x10
1001644e:	83 fe 01             	cmp    esi,0x1
10016451:	75 15                	jne    0x10016468
10016453:	68 ec 52 1a 10       	push   0x101a52ec
10016458:	56                   	push   esi
10016459:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1001645f:	83 c4 08             	add    esp,0x8
10016462:	5f                   	pop    edi
10016463:	5e                   	pop    esi
10016464:	5d                   	pop    ebp
10016465:	c2 10 00             	ret    0x10
10016468:	85 f6                	test   esi,esi
1001646a:	75 16                	jne    0x10016482
1001646c:	68 10 53 1a 10       	push   0x101a5310
10016471:	6a 01                	push   0x1
10016473:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10016479:	83 c4 08             	add    esp,0x8
1001647c:	5f                   	pop    edi
1001647d:	5e                   	pop    esi
1001647e:	5d                   	pop    ebp
1001647f:	c2 10 00             	ret    0x10
10016482:	56                   	push   esi
10016483:	e8 28 04 10 00       	call   0x101168b0
10016488:	50                   	push   eax
10016489:	68 38 53 1a 10       	push   0x101a5338
1001648e:	6a 01                	push   0x1
10016490:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10016496:	83 c4 10             	add    esp,0x10
10016499:	5f                   	pop    edi
1001649a:	5e                   	pop    esi
1001649b:	5d                   	pop    ebp
1001649c:	c2 10 00             	ret    0x10
