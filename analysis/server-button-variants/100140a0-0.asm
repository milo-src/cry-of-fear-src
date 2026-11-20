
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100140a0 <.text+0x130a0>:
100140a0:	55                   	push   ebp
100140a1:	8b ec                	mov    ebp,esp
100140a3:	83 e4 f8             	and    esp,0xfffffff8
100140a6:	83 ec 10             	sub    esp,0x10
100140a9:	56                   	push   esi
100140aa:	8b f1                	mov    esi,ecx
100140ac:	57                   	push   edi
100140ad:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
100140b0:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
100140b3:	85 c0                	test   eax,eax
100140b5:	74 38                	je     0x100140ef
100140b7:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100140ba:	f3 0f 10 57 08       	movss  xmm2,DWORD PTR [edi+0x8]
100140bf:	f3 0f 10 4f 0c       	movss  xmm1,DWORD PTR [edi+0xc]
100140c4:	f3 0f 10 47 10       	movss  xmm0,DWORD PTR [edi+0x10]
100140c9:	f3 0f 5c 50 08       	subss  xmm2,DWORD PTR [eax+0x8]
100140ce:	f3 0f 5c 48 0c       	subss  xmm1,DWORD PTR [eax+0xc]
100140d3:	f3 0f 5c 40 10       	subss  xmm0,DWORD PTR [eax+0x10]
100140d8:	0f 14 d1             	unpcklps xmm2,xmm1
100140db:	f3 0f 11 44 24 14    	movss  DWORD PTR [esp+0x14],xmm0
100140e1:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
100140e5:	66 0f d6 96 1c 01 00 	movq   QWORD PTR [esi+0x11c],xmm2
100140ec:	00 
100140ed:	eb 10                	jmp    0x100140ff
100140ef:	f3 0f 7e 47 08       	movq   xmm0,QWORD PTR [edi+0x8]
100140f4:	66 0f d6 86 1c 01 00 	movq   QWORD PTR [esi+0x11c],xmm0
100140fb:	00 
100140fc:	8b 47 10             	mov    eax,DWORD PTR [edi+0x10]
100140ff:	f3 0f 10 15 80 13 1a 	movss  xmm2,DWORD PTR ds:0x101a1380
10014106:	10 
10014107:	f3 0f 10 0d 80 1f 1a 	movss  xmm1,DWORD PTR ds:0x101a1f80
1001410e:	10 
1001410f:	89 86 24 01 00 00    	mov    DWORD PTR [esi+0x124],eax
10014115:	f3 0f 10 87 f8 00 00 	movss  xmm0,DWORD PTR [edi+0xf8]
1001411c:	00 
1001411d:	f3 0f 10 9f f4 00 00 	movss  xmm3,DWORD PTR [edi+0xf4]
10014124:	00 
10014125:	f3 0f 5c c2          	subss  xmm0,xmm2
10014129:	f3 0f 10 77 44       	movss  xmm6,DWORD PTR [edi+0x44]
1001412e:	f3 0f 5c da          	subss  xmm3,xmm2
10014132:	f3 0f 10 6f 48       	movss  xmm5,DWORD PTR [edi+0x48]
10014137:	f3 0f 10 67 4c       	movss  xmm4,DWORD PTR [edi+0x4c]
1001413c:	f3 0f 59 c5          	mulss  xmm0,xmm5
10014140:	f3 0f 59 de          	mulss  xmm3,xmm6
10014144:	0f 54 c1             	andps  xmm0,xmm1
10014147:	0f 54 d9             	andps  xmm3,xmm1
1001414a:	f3 0f 58 d8          	addss  xmm3,xmm0
1001414e:	f3 0f 10 87 fc 00 00 	movss  xmm0,DWORD PTR [edi+0xfc]
10014155:	00 
10014156:	f3 0f 5c c2          	subss  xmm0,xmm2
1001415a:	f3 0f 59 c4          	mulss  xmm0,xmm4
1001415e:	0f 54 c1             	andps  xmm0,xmm1
10014161:	f3 0f 58 d8          	addss  xmm3,xmm0
10014165:	f3 0f 5c 9e 10 01 00 	subss  xmm3,DWORD PTR [esi+0x110]
1001416c:	00 
1001416d:	f3 0f 59 f3          	mulss  xmm6,xmm3
10014171:	f3 0f 59 eb          	mulss  xmm5,xmm3
10014175:	f3 0f 58 b6 1c 01 00 	addss  xmm6,DWORD PTR [esi+0x11c]
1001417c:	00 
1001417d:	f3 0f 59 e3          	mulss  xmm4,xmm3
10014181:	f3 0f 58 ae 20 01 00 	addss  xmm5,DWORD PTR [esi+0x120]
10014188:	00 
10014189:	f3 0f 58 a6 24 01 00 	addss  xmm4,DWORD PTR [esi+0x124]
10014190:	00 
10014191:	0f 14 f5             	unpcklps xmm6,xmm5
10014194:	66 0f d6 b6 28 01 00 	movq   QWORD PTR [esi+0x128],xmm6
1001419b:	00 
1001419c:	f3 0f 11 64 24 14    	movss  DWORD PTR [esp+0x14],xmm4
100141a2:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
100141a6:	89 86 30 01 00 00    	mov    DWORD PTR [esi+0x130],eax
100141ac:	f3 0f 10 8e 28 01 00 	movss  xmm1,DWORD PTR [esi+0x128]
100141b3:	00 
100141b4:	f3 0f 10 96 2c 01 00 	movss  xmm2,DWORD PTR [esi+0x12c]
100141bb:	00 
100141bc:	f3 0f 5c 96 20 01 00 	subss  xmm2,DWORD PTR [esi+0x120]
100141c3:	00 
100141c4:	f3 0f 5c 8e 1c 01 00 	subss  xmm1,DWORD PTR [esi+0x11c]
100141cb:	00 
100141cc:	f3 0f 10 86 30 01 00 	movss  xmm0,DWORD PTR [esi+0x130]
100141d3:	00 
100141d4:	f3 0f 5c 86 24 01 00 	subss  xmm0,DWORD PTR [esi+0x124]
100141db:	00 
100141dc:	f3 0f 59 d2          	mulss  xmm2,xmm2
100141e0:	f3 0f 59 c9          	mulss  xmm1,xmm1
100141e4:	f3 0f 59 c0          	mulss  xmm0,xmm0
100141e8:	f3 0f 58 d1          	addss  xmm2,xmm1
100141ec:	0f 57 c9             	xorps  xmm1,xmm1
100141ef:	f3 0f 58 d0          	addss  xmm2,xmm0
100141f3:	0f 5a c2             	cvtps2pd xmm0,xmm2
100141f6:	66 0f 2e c8          	ucomisd xmm1,xmm0
100141fa:	77 06                	ja     0x10014202
100141fc:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
10014200:	eb 05                	jmp    0x10014207
10014202:	e8 89 7c 15 00       	call   0x1016be90
10014207:	0f 57 c9             	xorps  xmm1,xmm1
1001420a:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
1001420e:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
10014215:	10 
10014216:	0f 2f c1             	comiss xmm0,xmm1
10014219:	77 09                	ja     0x10014224
1001421b:	f6 87 a4 01 00 00 01 	test   BYTE PTR [edi+0x1a4],0x1
10014222:	74 1c                	je     0x10014240
10014224:	f3 0f 7e 86 1c 01 00 	movq   xmm0,QWORD PTR [esi+0x11c]
1001422b:	00 
1001422c:	8b 86 24 01 00 00    	mov    eax,DWORD PTR [esi+0x124]
10014232:	66 0f d6 86 28 01 00 	movq   QWORD PTR [esi+0x128],xmm0
10014239:	00 
1001423a:	89 86 30 01 00 00    	mov    DWORD PTR [esi+0x130],eax
10014240:	5f                   	pop    edi
10014241:	5e                   	pop    esi
10014242:	8b e5                	mov    esp,ebp
10014244:	5d                   	pop    ebp
10014245:	c3                   	ret
