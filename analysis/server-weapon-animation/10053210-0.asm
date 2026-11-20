
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10053210 <.text+0x52210>:
10053210:	56                   	push   esi
10053211:	8b f1                	mov    esi,ecx
10053213:	80 be f8 01 00 00 00 	cmp    BYTE PTR [esi+0x1f8],0x0
1005321a:	0f 84 43 01 00 00    	je     0x10053363
10053220:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
10053226:	80 b9 e8 1e 00 00 00 	cmp    BYTE PTR [ecx+0x1ee8],0x0
1005322d:	0f 85 30 01 00 00    	jne    0x10053363
10053233:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10053238:	f3 0f 10 81 e4 1e 00 	movss  xmm0,DWORD PTR [ecx+0x1ee4]
1005323f:	00 
10053240:	f3 0f 10 08          	movss  xmm1,DWORD PTR [eax]
10053244:	0f 2f c1             	comiss xmm0,xmm1
10053247:	0f 87 16 01 00 00    	ja     0x10053363
1005324d:	f3 0f 10 86 cc 01 00 	movss  xmm0,DWORD PTR [esi+0x1cc]
10053254:	00 
10053255:	0f 2f c1             	comiss xmm0,xmm1
10053258:	0f 87 05 01 00 00    	ja     0x10053363
1005325e:	f3 0f 10 86 d0 01 00 	movss  xmm0,DWORD PTR [esi+0x1d0]
10053265:	00 
10053266:	0f 2f c1             	comiss xmm0,xmm1
10053269:	0f 87 f4 00 00 00    	ja     0x10053363
1005326f:	f3 0f 10 86 d4 01 00 	movss  xmm0,DWORD PTR [esi+0x1d4]
10053276:	00 
10053277:	0f 2f c1             	comiss xmm0,xmm1
1005327a:	0f 87 e3 00 00 00    	ja     0x10053363
10053280:	83 be 28 01 00 00 00 	cmp    DWORD PTR [esi+0x128],0x0
10053287:	0f 85 d6 00 00 00    	jne    0x10053363
1005328d:	8b 06                	mov    eax,DWORD PTR [esi]
1005328f:	83 b9 98 1e 00 00 00 	cmp    DWORD PTR [ecx+0x1e98],0x0
10053296:	8b ce                	mov    ecx,esi
10053298:	6a 00                	push   0x0
1005329a:	6a 01                	push   0x1
1005329c:	8b 80 98 01 00 00    	mov    eax,DWORD PTR [eax+0x198]
100532a2:	74 1a                	je     0x100532be
100532a4:	6a 09                	push   0x9
100532a6:	ff d0                	call   eax
100532a8:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100532ad:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100532b1:	0f 5a c0             	cvtps2pd xmm0,xmm0
100532b4:	f2 0f 58 05 78 1e 1a 	addsd  xmm0,QWORD PTR ds:0x101a1e78
100532bb:	10 
100532bc:	eb 18                	jmp    0x100532d6
100532be:	6a 03                	push   0x3
100532c0:	ff d0                	call   eax
100532c2:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100532c7:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100532cb:	0f 5a c0             	cvtps2pd xmm0,xmm0
100532ce:	f2 0f 58 05 48 1e 1a 	addsd  xmm0,QWORD PTR ds:0x101a1e48
100532d5:	10 
100532d6:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
100532dc:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100532e0:	51                   	push   ecx
100532e1:	8b ce                	mov    ecx,esi
100532e3:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100532ea:	f3 0f 11 80 08 03 00 	movss  DWORD PTR [eax+0x308],xmm0
100532f1:	00 
100532f2:	8b 06                	mov    eax,DWORD PTR [esi]
100532f4:	ff 50 08             	call   DWORD PTR [eax+0x8]
100532f7:	6a 64                	push   0x64
100532f9:	6a 00                	push   0x0
100532fb:	83 ec 08             	sub    esp,0x8
100532fe:	c7 46 78 00 38 05 10 	mov    DWORD PTR [esi+0x78],0x10053800
10053305:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10053308:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1005330f:	3f 
10053310:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10053317:	68 b8 08 1b 10       	push   0x101b08b8
1005331c:	6a 02                	push   0x2
1005331e:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10053324:	e8 c7 96 0a 00       	call   0x100fc9f0
10053329:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1005332e:	83 c4 1c             	add    esp,0x1c
10053331:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10053335:	f3 0f 58 05 24 97 1a 	addss  xmm0,DWORD PTR ds:0x101a9724
1005333c:	10 
1005333d:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10053343:	f3 0f 11 80 08 03 00 	movss  DWORD PTR [eax+0x308],xmm0
1005334a:	00 
1005334b:	f3 0f 11 86 d4 01 00 	movss  DWORD PTR [esi+0x1d4],xmm0
10053352:	00 
10053353:	f3 0f 11 86 d0 01 00 	movss  DWORD PTR [esi+0x1d0],xmm0
1005335a:	00 
1005335b:	f3 0f 11 86 cc 01 00 	movss  DWORD PTR [esi+0x1cc],xmm0
10053362:	00 
10053363:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10053369:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1005336c:	8b 90 cc 05 00 00    	mov    edx,DWORD PTR [eax+0x5cc]
10053372:	39 91 14 01 00 00    	cmp    DWORD PTR [ecx+0x114],edx
10053378:	74 25                	je     0x1005339f
1005337a:	89 91 14 01 00 00    	mov    DWORD PTR [ecx+0x114],edx
10053380:	8b ce                	mov    ecx,esi
10053382:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10053385:	8b 16                	mov    edx,DWORD PTR [esi]
10053387:	ff b0 14 01 00 00    	push   DWORD PTR [eax+0x114]
1005338d:	ff b6 60 01 00 00    	push   DWORD PTR [esi+0x160]
10053393:	ff 92 9c 01 00 00    	call   DWORD PTR [edx+0x19c]
10053399:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1005339f:	83 b8 98 1e 00 00 00 	cmp    DWORD PTR [eax+0x1e98],0x0
100533a6:	75 2e                	jne    0x100533d6
100533a8:	8b 88 d0 05 00 00    	mov    ecx,DWORD PTR [eax+0x5d0]
100533ae:	f6 c1 01             	test   cl,0x1
100533b1:	74 0f                	je     0x100533c2
100533b3:	83 e1 fe             	and    ecx,0xfffffffe
100533b6:	89 88 d0 05 00 00    	mov    DWORD PTR [eax+0x5d0],ecx
100533bc:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
100533c2:	8b 88 d0 05 00 00    	mov    ecx,DWORD PTR [eax+0x5d0]
100533c8:	f6 c1 02             	test   cl,0x2
100533cb:	74 09                	je     0x100533d6
100533cd:	83 e1 fd             	and    ecx,0xfffffffd
100533d0:	89 88 d0 05 00 00    	mov    DWORD PTR [eax+0x5d0],ecx
100533d6:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100533d9:	c7 80 64 01 00 00 00 	mov    DWORD PTR [eax+0x164],0x42480000
100533e0:	00 48 42 
100533e3:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
100533e9:	80 b9 e8 1e 00 00 00 	cmp    BYTE PTR [ecx+0x1ee8],0x0
100533f0:	75 10                	jne    0x10053402
100533f2:	80 be 04 02 00 00 00 	cmp    BYTE PTR [esi+0x204],0x0
100533f9:	74 07                	je     0x10053402
100533fb:	c6 86 04 02 00 00 00 	mov    BYTE PTR [esi+0x204],0x0
10053402:	80 b9 c0 1e 00 00 01 	cmp    BYTE PTR [ecx+0x1ec0],0x1
10053409:	75 70                	jne    0x1005347b
1005340b:	e8 f0 19 09 00       	call   0x100e4e00
10053410:	84 c0                	test   al,al
10053412:	75 67                	jne    0x1005347b
10053414:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1005341a:	80 b8 1c 1f 00 00 00 	cmp    BYTE PTR [eax+0x1f1c],0x0
10053421:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
10053424:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
1005342a:	6a 00                	push   0x0
1005342c:	ff 35 78 65 22 10    	push   DWORD PTR ds:0x10226578
10053432:	6a 01                	push   0x1
10053434:	74 12                	je     0x10053448
10053436:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1005343c:	6a 00                	push   0x0
1005343e:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10053444:	6a 01                	push   0x1
10053446:	eb 10                	jmp    0x10053458
10053448:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1005344e:	6a 00                	push   0x0
10053450:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10053456:	6a 00                	push   0x0
10053458:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1005345e:	83 c4 18             	add    esp,0x18
10053461:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
10053467:	8b ce                	mov    ecx,esi
10053469:	e8 62 00 00 00       	call   0x100534d0
1005346e:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10053474:	c6 80 c0 1e 00 00 00 	mov    BYTE PTR [eax+0x1ec0],0x0
1005347b:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10053481:	f3 0f 10 80 e4 1e 00 	movss  xmm0,DWORD PTR [eax+0x1ee4]
10053488:	00 
10053489:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1005348e:	0f 2f 00             	comiss xmm0,DWORD PTR [eax]
10053491:	76 12                	jbe    0x100534a5
10053493:	8b 06                	mov    eax,DWORD PTR [esi]
10053495:	8b ce                	mov    ecx,esi
10053497:	6a 00                	push   0x0
10053499:	6a 01                	push   0x1
1005349b:	6a 0e                	push   0xe
1005349d:	ff 90 98 01 00 00    	call   DWORD PTR [eax+0x198]
100534a3:	5e                   	pop    esi
100534a4:	c3                   	ret
100534a5:	83 be 28 01 00 00 02 	cmp    DWORD PTR [esi+0x128],0x2
100534ac:	75 13                	jne    0x100534c1
100534ae:	83 be f0 01 00 00 00 	cmp    DWORD PTR [esi+0x1f0],0x0
100534b5:	75 0a                	jne    0x100534c1
100534b7:	c7 86 28 01 00 00 00 	mov    DWORD PTR [esi+0x128],0x0
100534be:	00 00 00 
100534c1:	8b ce                	mov    ecx,esi
100534c3:	5e                   	pop    esi
100534c4:	e9 97 a0 0c 00       	jmp    0x1011d560
