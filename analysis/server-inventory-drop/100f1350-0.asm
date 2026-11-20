
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100f1350 <.text+0xf0350>:
100f1350:	55                   	push   ebp
100f1351:	8b ec                	mov    ebp,esp
100f1353:	56                   	push   esi
100f1354:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100f1357:	57                   	push   edi
100f1358:	8b f9                	mov    edi,ecx
100f135a:	39 b7 2c 25 00 00    	cmp    DWORD PTR [edi+0x252c],esi
100f1360:	75 43                	jne    0x100f13a5
100f1362:	e8 d9 00 00 00       	call   0x100f1440
100f1367:	8b 06                	mov    eax,DWORD PTR [esi]
100f1369:	8b ce                	mov    ecx,esi
100f136b:	ff 90 4c 01 00 00    	call   DWORD PTR [eax+0x14c]
100f1371:	8b ce                	mov    ecx,esi
100f1373:	e8 58 67 f2 ff       	call   0x10017ad0
100f1378:	c7 46 78 00 00 00 00 	mov    DWORD PTR [esi+0x78],0x0
100f137f:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f1382:	c7 87 2c 25 00 00 00 	mov    DWORD PTR [edi+0x252c],0x0
100f1389:	00 00 00 
100f138c:	c7 80 bc 00 00 00 00 	mov    DWORD PTR [eax+0xbc],0x0
100f1393:	00 00 00 
100f1396:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f1399:	c7 80 c0 00 00 00 00 	mov    DWORD PTR [eax+0xc0],0x0
100f13a0:	00 00 00 
100f13a3:	eb 12                	jmp    0x100f13b7
100f13a5:	39 b7 34 25 00 00    	cmp    DWORD PTR [edi+0x2534],esi
100f13ab:	75 0a                	jne    0x100f13b7
100f13ad:	c7 87 34 25 00 00 00 	mov    DWORD PTR [edi+0x2534],0x0
100f13b4:	00 00 00 
100f13b7:	8b 06                	mov    eax,DWORD PTR [esi]
100f13b9:	8b ce                	mov    ecx,esi
100f13bb:	ff 90 80 01 00 00    	call   DWORD PTR [eax+0x180]
100f13c1:	8b 84 87 14 25 00 00 	mov    eax,DWORD PTR [edi+eax*4+0x2514]
100f13c8:	3b c6                	cmp    eax,esi
100f13ca:	75 24                	jne    0x100f13f0
100f13cc:	8b 06                	mov    eax,DWORD PTR [esi]
100f13ce:	8b ce                	mov    ecx,esi
100f13d0:	ff 90 80 01 00 00    	call   DWORD PTR [eax+0x180]
100f13d6:	8d 0c 87             	lea    ecx,[edi+eax*4]
100f13d9:	8b 86 64 01 00 00    	mov    eax,DWORD PTR [esi+0x164]
100f13df:	5f                   	pop    edi
100f13e0:	89 81 14 25 00 00    	mov    DWORD PTR [ecx+0x2514],eax
100f13e6:	b8 01 00 00 00       	mov    eax,0x1
100f13eb:	5e                   	pop    esi
100f13ec:	5d                   	pop    ebp
100f13ed:	c2 04 00             	ret    0x4
100f13f0:	85 c0                	test   eax,eax
100f13f2:	74 10                	je     0x100f1404
100f13f4:	8b 88 64 01 00 00    	mov    ecx,DWORD PTR [eax+0x164]
100f13fa:	3b ce                	cmp    ecx,esi
100f13fc:	74 0e                	je     0x100f140c
100f13fe:	8b c1                	mov    eax,ecx
100f1400:	85 c0                	test   eax,eax
100f1402:	75 f0                	jne    0x100f13f4
100f1404:	5f                   	pop    edi
100f1405:	33 c0                	xor    eax,eax
100f1407:	5e                   	pop    esi
100f1408:	5d                   	pop    ebp
100f1409:	c2 04 00             	ret    0x4
100f140c:	8b 8e 64 01 00 00    	mov    ecx,DWORD PTR [esi+0x164]
100f1412:	5f                   	pop    edi
100f1413:	89 88 64 01 00 00    	mov    DWORD PTR [eax+0x164],ecx
100f1419:	b8 01 00 00 00       	mov    eax,0x1
100f141e:	5e                   	pop    esi
100f141f:	5d                   	pop    ebp
100f1420:	c2 04 00             	ret    0x4
