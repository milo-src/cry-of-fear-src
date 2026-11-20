
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c0200 <.text+0xbf200>:
100c0200:	56                   	push   esi
100c0201:	8b f1                	mov    esi,ecx
100c0203:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100c0209:	85 c9                	test   ecx,ecx
100c020b:	74 1b                	je     0x100c0228
100c020d:	8b 01                	mov    eax,DWORD PTR [ecx]
100c020f:	ff 90 f0 00 00 00    	call   DWORD PTR [eax+0xf0]
100c0215:	85 c0                	test   eax,eax
100c0217:	75 0f                	jne    0x100c0228
100c0219:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c021c:	5e                   	pop    esi
100c021d:	81 88 a8 01 00 00 00 	or     DWORD PTR [eax+0x1a8],0x40000000
100c0224:	00 00 40 
100c0227:	c3                   	ret
100c0228:	80 7e 0a 00          	cmp    BYTE PTR [esi+0xa],0x0
100c022c:	74 07                	je     0x100c0235
100c022e:	c6 86 20 02 00 00 01 	mov    BYTE PTR [esi+0x220],0x1
100c0235:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c0238:	c7 80 18 01 00 00 00 	mov    DWORD PTR [eax+0x118],0x0
100c023f:	00 00 00 
100c0242:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c0245:	c7 80 70 01 00 00 00 	mov    DWORD PTR [eax+0x170],0x40000000
100c024c:	00 00 40 
100c024f:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100c0255:	85 c9                	test   ecx,ecx
100c0257:	74 05                	je     0x100c025e
100c0259:	8b 01                	mov    eax,DWORD PTR [ecx]
100c025b:	ff 50 20             	call   DWORD PTR [eax+0x20]
100c025e:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100c0261:	8b 41 54             	mov    eax,DWORD PTR [ecx+0x54]
100c0264:	89 81 ac 00 00 00    	mov    DWORD PTR [ecx+0xac],eax
100c026a:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100c026d:	8b 81 64 01 00 00    	mov    eax,DWORD PTR [ecx+0x164]
100c0273:	89 81 b4 01 00 00    	mov    DWORD PTR [ecx+0x1b4],eax
100c0279:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c027c:	c7 80 74 01 00 00 00 	mov    DWORD PTR [eax+0x174],0x0
100c0283:	00 00 00 
100c0286:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c0289:	c7 86 28 02 00 00 01 	mov    DWORD PTR [esi+0x228],0x1
100c0290:	00 00 00 
100c0293:	c7 86 18 02 00 00 01 	mov    DWORD PTR [esi+0x218],0x1
100c029a:	00 00 00 
100c029d:	83 88 a8 01 00 00 20 	or     DWORD PTR [eax+0x1a8],0x20
100c02a4:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c02a7:	f6 80 a4 01 00 00 04 	test   BYTE PTR [eax+0x1a4],0x4
100c02ae:	74 0a                	je     0x100c02ba
100c02b0:	81 88 a8 01 00 00 00 	or     DWORD PTR [eax+0x1a8],0x800000
100c02b7:	00 80 00 
100c02ba:	8b ce                	mov    ecx,esi
100c02bc:	e8 0f a8 f4 ff       	call   0x1000aad0
100c02c1:	8b ce                	mov    ecx,esi
100c02c3:	e8 a8 17 00 00       	call   0x100c1a70
100c02c8:	8b ce                	mov    ecx,esi
100c02ca:	e8 01 e6 f4 ff       	call   0x1000e8d0
100c02cf:	6a 00                	push   0x0
100c02d1:	8d 8e 84 01 00 00    	lea    ecx,[esi+0x184]
100c02d7:	c7 86 e8 02 00 00 ff 	mov    DWORD PTR [esi+0x2e8],0xffffffff
100c02de:	ff ff ff 
100c02e1:	c7 86 ec 02 00 00 00 	mov    DWORD PTR [esi+0x2ec],0x0
100c02e8:	00 00 00 
100c02eb:	e8 50 74 f5 ff       	call   0x10017740
100c02f0:	8b 06                	mov    eax,DWORD PTR [esi]
100c02f2:	8b ce                	mov    ecx,esi
100c02f4:	c7 86 28 03 00 00 00 	mov    DWORD PTR [esi+0x328],0x45000000
100c02fb:	00 00 45 
100c02fe:	c7 86 2c 03 00 00 00 	mov    DWORD PTR [esi+0x32c],0x45800000
100c0305:	00 80 45 
100c0308:	ff 90 00 02 00 00    	call   DWORD PTR [eax+0x200]
100c030e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c0311:	51                   	push   ecx
100c0312:	8b ce                	mov    ecx,esi
100c0314:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
100c031b:	f3 0f 7e 40 08       	movq   xmm0,QWORD PTR [eax+0x8]
100c0320:	66 0f d6 86 e4 01 00 	movq   QWORD PTR [esi+0x1e4],xmm0
100c0327:	00 
100c0328:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
100c032b:	89 86 ec 01 00 00    	mov    DWORD PTR [esi+0x1ec],eax
100c0331:	8b 06                	mov    eax,DWORD PTR [esi]
100c0333:	c7 46 78 20 04 0c 10 	mov    DWORD PTR [esi+0x78],0x100c0420
100c033a:	ff 50 08             	call   DWORD PTR [eax+0x8]
100c033d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c0340:	c7 86 80 00 00 00 40 	mov    DWORD PTR [esi+0x80],0x100c0740
100c0347:	07 0c 10 
100c034a:	8b 88 88 01 00 00    	mov    ecx,DWORD PTR [eax+0x188]
100c0350:	85 c9                	test   ecx,ecx
100c0352:	74 13                	je     0x100c0367
100c0354:	89 88 14 01 00 00    	mov    DWORD PTR [eax+0x114],ecx
100c035a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c035d:	c7 80 88 01 00 00 00 	mov    DWORD PTR [eax+0x188],0x0
100c0364:	00 00 00 
100c0367:	5e                   	pop    esi
100c0368:	c3                   	ret
