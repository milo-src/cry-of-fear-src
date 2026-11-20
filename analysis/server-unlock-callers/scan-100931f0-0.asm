
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100931f0 <.text+0x921f0>:
100931f0:	55                   	push   ebp
100931f1:	8b ec                	mov    ebp,esp
100931f3:	56                   	push   esi
100931f4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100931f7:	57                   	push   edi
100931f8:	8b f9                	mov    edi,ecx
100931fa:	85 f6                	test   esi,esi
100931fc:	0f 84 61 01 00 00    	je     0x10093363
10093202:	8b 06                	mov    eax,DWORD PTR [esi]
10093204:	8b ce                	mov    ecx,esi
10093206:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
1009320c:	85 c0                	test   eax,eax
1009320e:	0f 84 4f 01 00 00    	je     0x10093363
10093214:	8b 06                	mov    eax,DWORD PTR [esi]
10093216:	8b ce                	mov    ecx,esi
10093218:	ff 90 bc 00 00 00    	call   DWORD PTR [eax+0xbc]
1009321e:	85 c0                	test   eax,eax
10093220:	0f 84 3d 01 00 00    	je     0x10093363
10093226:	ff 76 04             	push   DWORD PTR [esi+0x4]
10093229:	e8 b2 f3 f7 ff       	call   0x100125e0
1009322e:	8b f0                	mov    esi,eax
10093230:	83 c4 04             	add    esp,0x4
10093233:	85 f6                	test   esi,esi
10093235:	0f 84 28 01 00 00    	je     0x10093363
1009323b:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
10093241:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10093244:	f3 0f 10 01          	movss  xmm0,DWORD PTR [ecx]
10093248:	0f 2f 80 58 02 00 00 	comiss xmm0,DWORD PTR [eax+0x258]
1009324f:	0f 86 0e 01 00 00    	jbe    0x10093363
10093255:	83 b8 48 02 00 00 05 	cmp    DWORD PTR [eax+0x248],0x5
1009325c:	0f 8c c3 00 00 00    	jl     0x10093325
10093262:	6a 00                	push   0x0
10093264:	6a 00                	push   0x0
10093266:	68 00 02 00 00       	push   0x200
1009326b:	8b ce                	mov    ecx,esi
1009326d:	e8 8e 9d 04 00       	call   0x100dd000
10093272:	84 c0                	test   al,al
10093274:	0f 85 ab 00 00 00    	jne    0x10093325
1009327a:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1009327d:	83 b8 4c 02 00 00 00 	cmp    DWORD PTR [eax+0x24c],0x0
10093284:	0f 8f 9b 00 00 00    	jg     0x10093325
1009328a:	6a 00                	push   0x0
1009328c:	6a 00                	push   0x0
1009328e:	68 24 93 1c 10       	push   0x101c9324
10093293:	56                   	push   esi
10093294:	e8 77 65 08 00       	call   0x10119810
10093299:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1009329c:	83 c4 10             	add    esp,0x10
1009329f:	6a 64                	push   0x64
100932a1:	6a 00                	push   0x0
100932a3:	83 ec 08             	sub    esp,0x8
100932a6:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100932ad:	3f 
100932ae:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100932b5:	68 f0 92 1c 10       	push   0x101c92f0
100932ba:	6a 02                	push   0x2
100932bc:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100932c2:	e8 29 97 06 00       	call   0x100fc9f0
100932c7:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100932ca:	83 c4 1c             	add    esp,0x1c
100932cd:	81 8e 2c 04 00 00 00 	or     DWORD PTR [esi+0x42c],0x200
100932d4:	02 00 00 
100932d7:	6a 64                	push   0x64
100932d9:	6a 00                	push   0x0
100932db:	83 ec 08             	sub    esp,0x8
100932de:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100932e5:	3f 
100932e6:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100932ed:	68 0c 93 1c 10       	push   0x101c930c
100932f2:	6a 00                	push   0x0
100932f4:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100932fa:	e8 f1 96 06 00       	call   0x100fc9f0
100932ff:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10093302:	83 c4 1c             	add    esp,0x1c
10093305:	c7 80 4c 02 00 00 01 	mov    DWORD PTR [eax+0x24c],0x1
1009330c:	00 00 00 
1009330f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10093314:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10093318:	0f 5a c0             	cvtps2pd xmm0,xmm0
1009331b:	f2 0f 58 05 88 1e 1a 	addsd  xmm0,QWORD PTR ds:0x101a1e88
10093322:	10 
10093323:	eb 2f                	jmp    0x10093354
10093325:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10093328:	6a 00                	push   0x0
1009332a:	6a 05                	push   0x5
1009332c:	68 34 93 1c 10       	push   0x101c9334
10093331:	ff 80 48 02 00 00    	inc    DWORD PTR [eax+0x248]
10093337:	56                   	push   esi
10093338:	e8 d3 64 08 00       	call   0x10119810
1009333d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10093342:	83 c4 10             	add    esp,0x10
10093345:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10093349:	0f 5a c0             	cvtps2pd xmm0,xmm0
1009334c:	f2 0f 58 05 60 1e 1a 	addsd  xmm0,QWORD PTR ds:0x101a1e60
10093353:	10 
10093354:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10093357:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1009335b:	f3 0f 11 80 58 02 00 	movss  DWORD PTR [eax+0x258],xmm0
10093362:	00 
10093363:	5f                   	pop    edi
10093364:	5e                   	pop    esi
10093365:	5d                   	pop    ebp
10093366:	c2 10 00             	ret    0x10
