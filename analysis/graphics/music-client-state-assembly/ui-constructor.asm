; Extracted from retained GNU objdump -d -Mintel listing; original DLL bytes verified.
10002340:	55                   	push   ebp
10002341:	8b ec                	mov    ebp,esp
10002343:	51                   	push   ecx
10002344:	53                   	push   ebx
10002345:	56                   	push   esi
10002346:	57                   	push   edi
10002347:	8b f9                	mov    edi,ecx
10002349:	89 7d fc             	mov    DWORD PTR [ebp-0x4],edi
1000234c:	e8 0d 11 0b 00       	call   0x100b345e
10002351:	8d b7 c8 00 00 00    	lea    esi,[edi+0xc8]
10002357:	c7 07 74 b3 13 10    	mov    DWORD PTR [edi],0x1013b374
1000235d:	8d 9f bc 00 00 00    	lea    ebx,[edi+0xbc]
10002363:	8b ce                	mov    ecx,esi
10002365:	c7 03 74 b5 13 10    	mov    DWORD PTR [ebx],0x1013b574
1000236b:	68 08 b1 13 10       	push   0x1013b108
10002370:	c7 87 c0 00 00 00 00 	mov    DWORD PTR [edi+0xc0],0x0
10002377:	00 00 00 
1000237a:	e8 e5 13 0b 00       	call   0x100b3764
1000237f:	81 c7 98 01 00 00    	add    edi,0x198
10002385:	6a 00                	push   0x0
10002387:	8b cf                	mov    ecx,edi
10002389:	e8 42 14 0b 00       	call   0x100b37d0
1000238e:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10002391:	8b 06                	mov    eax,DWORD PTR [esi]
10002393:	51                   	push   ecx
10002394:	66 c7 81 60 02 00 00 	mov    WORD PTR [ecx+0x260],0x0
1000239b:	00 00 
1000239d:	c7 81 5c 02 00 00 00 	mov    DWORD PTR [ecx+0x25c],0x0
100023a4:	00 00 00 
100023a7:	c7 81 58 02 00 00 00 	mov    DWORD PTR [ecx+0x258],0x0
100023ae:	00 00 00 
100023b1:	c6 81 c4 00 00 00 01 	mov    BYTE PTR [ecx+0xc4],0x1
100023b8:	8b ce                	mov    ecx,esi
100023ba:	ff 50 40             	call   DWORD PTR [eax+0x40]
100023bd:	8b 06                	mov    eax,DWORD PTR [esi]
100023bf:	8b ce                	mov    ecx,esi
100023c1:	6a 00                	push   0x0
100023c3:	68 ff 00 00 00       	push   0xff
100023c8:	68 ff 00 00 00       	push   0xff
100023cd:	68 ff 00 00 00       	push   0xff
100023d2:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
100023d8:	8b 06                	mov    eax,DWORD PTR [esi]
100023da:	8b ce                	mov    ecx,esi
100023dc:	68 ff 00 00 00       	push   0xff
100023e1:	6a 00                	push   0x0
100023e3:	6a 00                	push   0x0
100023e5:	6a 00                	push   0x0
100023e7:	ff 90 2c 01 00 00    	call   DWORD PTR [eax+0x12c]
100023ed:	8b 06                	mov    eax,DWORD PTR [esi]
100023ef:	8b ce                	mov    ecx,esi
100023f1:	53                   	push   ebx
100023f2:	ff 50 70             	call   DWORD PTR [eax+0x70]
100023f5:	8b 07                	mov    eax,DWORD PTR [edi]
100023f7:	8b cf                	mov    ecx,edi
100023f9:	8b 75 fc             	mov    esi,DWORD PTR [ebp-0x4]
100023fc:	56                   	push   esi
100023fd:	ff 50 40             	call   DWORD PTR [eax+0x40]
10002400:	8b 07                	mov    eax,DWORD PTR [edi]
10002402:	8b cf                	mov    ecx,edi
10002404:	53                   	push   ebx
10002405:	ff 50 70             	call   DWORD PTR [eax+0x70]
10002408:	6a 00                	push   0x0
1000240a:	8b ce                	mov    ecx,esi
1000240c:	e8 a3 11 0b 00       	call   0x100b35b4
10002411:	5f                   	pop    edi
10002412:	8b c6                	mov    eax,esi
10002414:	5e                   	pop    esi
10002415:	5b                   	pop    ebx
10002416:	8b e5                	mov    esp,ebp
10002418:	5d                   	pop    ebp
10002419:	c3                   	ret
