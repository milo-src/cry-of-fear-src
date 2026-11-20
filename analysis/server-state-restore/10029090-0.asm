
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10029090 <.text+0x28090>:
10029090:	55                   	push   ebp
10029091:	8b ec                	mov    ebp,esp
10029093:	83 ec 0c             	sub    esp,0xc
10029096:	53                   	push   ebx
10029097:	56                   	push   esi
10029098:	57                   	push   edi
10029099:	8b f9                	mov    edi,ecx
1002909b:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1002909e:	89 7d f4             	mov    DWORD PTR [ebp-0xc],edi
100290a1:	85 c9                	test   ecx,ecx
100290a3:	0f 84 01 01 00 00    	je     0x100291aa
100290a9:	8b 1d 88 31 22 10    	mov    ebx,DWORD PTR ds:0x10223188
100290af:	8d 97 bc 8b 00 00    	lea    edx,[edi+0x8bbc]
100290b5:	be 01 00 00 00       	mov    esi,0x1
100290ba:	8a 07                	mov    al,BYTE PTR [edi]
100290bc:	84 c0                	test   al,al
100290be:	74 1d                	je     0x100290dd
100290c0:	80 3a 00             	cmp    BYTE PTR [edx],0x0
100290c3:	74 18                	je     0x100290dd
100290c5:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100290c8:	8b 80 d4 01 00 00    	mov    eax,DWORD PTR [eax+0x1d4]
100290ce:	03 83 98 00 00 00    	add    eax,DWORD PTR [ebx+0x98]
100290d4:	39 42 08             	cmp    DWORD PTR [edx+0x8],eax
100290d7:	0f 84 d8 00 00 00    	je     0x100291b5
100290dd:	80 ba 64 78 ff ff 00 	cmp    BYTE PTR [edx-0x879c],0x0
100290e4:	74 3f                	je     0x10029125
100290e6:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100290e9:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
100290ec:	8b 88 d4 01 00 00    	mov    ecx,DWORD PTR [eax+0x1d4]
100290f2:	8b 83 98 00 00 00    	mov    eax,DWORD PTR [ebx+0x98]
100290f8:	03 c1                	add    eax,ecx
100290fa:	8b 8a 6c 78 ff ff    	mov    ecx,DWORD PTR [edx-0x8794]
10029100:	3b c8                	cmp    ecx,eax
10029102:	75 1e                	jne    0x10029122
10029104:	80 ba 34 7a ff ff 01 	cmp    BYTE PTR [edx-0x85cc],0x1
1002910b:	0f 84 c1 01 00 00    	je     0x100292d2
10029111:	3b c8                	cmp    ecx,eax
10029113:	75 0d                	jne    0x10029122
10029115:	80 ba 34 7a ff ff 00 	cmp    BYTE PTR [edx-0x85cc],0x0
1002911c:	0f 84 21 03 00 00    	je     0x10029443
10029122:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10029125:	46                   	inc    esi
10029126:	81 c2 1c 04 00 00    	add    edx,0x41c
1002912c:	83 fe 20             	cmp    esi,0x20
1002912f:	7e 89                	jle    0x100290ba
10029131:	68 cc c2 1a 10       	push   0x101ac2cc
10029136:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
1002913c:	d9 5d f4             	fstp   DWORD PTR [ebp-0xc]
1002913f:	f3 0f 10 45 f4       	movss  xmm0,DWORD PTR [ebp-0xc]
10029144:	83 c4 04             	add    esp,0x4
10029147:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
1002914e:	9f                   	lahf
1002914f:	f6 c4 44             	test   ah,0x44
10029152:	7a 56                	jp     0x100291aa
10029154:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
10029157:	53                   	push   ebx
10029158:	e8 13 d4 09 00       	call   0x100c6570
1002915d:	83 c4 04             	add    esp,0x4
10029160:	8d bb 40 25 00 00    	lea    edi,[ebx+0x2540]
10029166:	33 f6                	xor    esi,esi
10029168:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
1002916f:	00 
10029170:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10029173:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10029179:	6a 00                	push   0x0
1002917b:	ff 35 e8 64 22 10    	push   DWORD PTR ds:0x102264e8
10029181:	6a 01                	push   0x1
10029183:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
10029189:	56                   	push   esi
1002918a:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10029190:	ff 37                	push   DWORD PTR [edi]
10029192:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
10029198:	83 c4 18             	add    esp,0x18
1002919b:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100291a1:	46                   	inc    esi
100291a2:	8d 7f 04             	lea    edi,[edi+0x4]
100291a5:	83 fe 20             	cmp    esi,0x20
100291a8:	7c c6                	jl     0x10029170
100291aa:	5f                   	pop    edi
100291ab:	5e                   	pop    esi
100291ac:	32 c0                	xor    al,al
100291ae:	5b                   	pop    ebx
100291af:	8b e5                	mov    esp,ebp
100291b1:	5d                   	pop    ebp
100291b2:	c2 04 00             	ret    0x4
100291b5:	69 f6 1c 04 00 00    	imul   esi,esi,0x41c
100291bb:	68 1c 04 00 00       	push   0x41c
100291c0:	6a 00                	push   0x0
100291c2:	52                   	push   edx
100291c3:	8b 84 3e 78 89 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x8978]
100291ca:	89 81 3c 06 00 00    	mov    DWORD PTR [ecx+0x63c],eax
100291d0:	8b 84 3e 7c 89 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x897c]
100291d7:	89 81 40 06 00 00    	mov    DWORD PTR [ecx+0x640],eax
100291dd:	8b 84 3e 80 89 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x8980]
100291e4:	89 81 44 06 00 00    	mov    DWORD PTR [ecx+0x644],eax
100291ea:	8b 84 3e 84 89 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x8984]
100291f1:	89 81 48 06 00 00    	mov    DWORD PTR [ecx+0x648],eax
100291f7:	8b 84 3e 88 89 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x8988]
100291fe:	89 81 4c 06 00 00    	mov    DWORD PTR [ecx+0x64c],eax
10029204:	8b 84 3e 8c 89 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x898c]
1002920b:	89 81 50 06 00 00    	mov    DWORD PTR [ecx+0x650],eax
10029211:	8b 84 3e 90 89 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x8990]
10029218:	89 81 54 06 00 00    	mov    DWORD PTR [ecx+0x654],eax
1002921e:	8b 84 3e 94 89 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x8994]
10029225:	89 81 58 06 00 00    	mov    DWORD PTR [ecx+0x658],eax
1002922b:	8b 84 3e 98 89 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x8998]
10029232:	89 81 5c 06 00 00    	mov    DWORD PTR [ecx+0x65c],eax
10029238:	8b 84 3e 9c 89 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x899c]
1002923f:	89 81 60 06 00 00    	mov    DWORD PTR [ecx+0x660],eax
10029245:	8b 84 3e a0 89 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x89a0]
1002924c:	89 81 64 06 00 00    	mov    DWORD PTR [ecx+0x664],eax
10029252:	8b 84 3e a4 89 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x89a4]
10029259:	89 81 68 06 00 00    	mov    DWORD PTR [ecx+0x668],eax
1002925f:	8b 84 3e a8 89 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x89a8]
10029266:	89 81 6c 06 00 00    	mov    DWORD PTR [ecx+0x66c],eax
1002926c:	8b 84 3e ac 89 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x89ac]
10029273:	89 81 70 06 00 00    	mov    DWORD PTR [ecx+0x670],eax
10029279:	8b 84 3e b0 89 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x89b0]
10029280:	89 81 74 06 00 00    	mov    DWORD PTR [ecx+0x674],eax
10029286:	8a 84 3e b4 89 00 00 	mov    al,BYTE PTR [esi+edi*1+0x89b4]
1002928d:	88 81 78 06 00 00    	mov    BYTE PTR [ecx+0x678],al
10029293:	8b 84 3e b8 89 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x89b8]
1002929a:	89 81 7c 06 00 00    	mov    DWORD PTR [ecx+0x67c],eax
100292a0:	8a 84 3e bc 89 00 00 	mov    al,BYTE PTR [esi+edi*1+0x89bc]
100292a7:	88 81 80 06 00 00    	mov    BYTE PTR [ecx+0x680],al
100292ad:	e8 de 61 11 00       	call   0x1013f490
100292b2:	68 1c 04 00 00       	push   0x41c
100292b7:	8d 47 04             	lea    eax,[edi+0x4]
100292ba:	03 c6                	add    eax,esi
100292bc:	6a 00                	push   0x0
100292be:	50                   	push   eax
100292bf:	e8 cc 61 11 00       	call   0x1013f490
100292c4:	83 c4 18             	add    esp,0x18
100292c7:	b0 01                	mov    al,0x1
100292c9:	5f                   	pop    edi
100292ca:	5e                   	pop    esi
100292cb:	5b                   	pop    ebx
100292cc:	8b e5                	mov    esp,ebp
100292ce:	5d                   	pop    ebp
100292cf:	c2 04 00             	ret    0x4
100292d2:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
100292d5:	69 ce 1c 04 00 00    	imul   ecx,esi,0x41c
100292db:	53                   	push   ebx
100292dc:	8b 84 39 dc 01 00 00 	mov    eax,DWORD PTR [ecx+edi*1+0x1dc]
100292e3:	89 83 3c 06 00 00    	mov    DWORD PTR [ebx+0x63c],eax
100292e9:	8b 84 39 e0 01 00 00 	mov    eax,DWORD PTR [ecx+edi*1+0x1e0]
100292f0:	89 83 40 06 00 00    	mov    DWORD PTR [ebx+0x640],eax
100292f6:	8b 84 39 e4 01 00 00 	mov    eax,DWORD PTR [ecx+edi*1+0x1e4]
100292fd:	89 83 44 06 00 00    	mov    DWORD PTR [ebx+0x644],eax
10029303:	8b 84 39 e8 01 00 00 	mov    eax,DWORD PTR [ecx+edi*1+0x1e8]
1002930a:	89 83 48 06 00 00    	mov    DWORD PTR [ebx+0x648],eax
10029310:	8b 84 39 ec 01 00 00 	mov    eax,DWORD PTR [ecx+edi*1+0x1ec]
10029317:	89 83 4c 06 00 00    	mov    DWORD PTR [ebx+0x64c],eax
1002931d:	8b 84 39 f0 01 00 00 	mov    eax,DWORD PTR [ecx+edi*1+0x1f0]
10029324:	89 83 50 06 00 00    	mov    DWORD PTR [ebx+0x650],eax
1002932a:	8b 84 39 f4 01 00 00 	mov    eax,DWORD PTR [ecx+edi*1+0x1f4]
10029331:	89 83 54 06 00 00    	mov    DWORD PTR [ebx+0x654],eax
10029337:	8b 84 39 f8 01 00 00 	mov    eax,DWORD PTR [ecx+edi*1+0x1f8]
1002933e:	89 83 58 06 00 00    	mov    DWORD PTR [ebx+0x658],eax
10029344:	8b 84 39 fc 01 00 00 	mov    eax,DWORD PTR [ecx+edi*1+0x1fc]
1002934b:	89 83 5c 06 00 00    	mov    DWORD PTR [ebx+0x65c],eax
10029351:	8b 84 39 00 02 00 00 	mov    eax,DWORD PTR [ecx+edi*1+0x200]
10029358:	89 83 60 06 00 00    	mov    DWORD PTR [ebx+0x660],eax
1002935e:	8b 84 39 04 02 00 00 	mov    eax,DWORD PTR [ecx+edi*1+0x204]
10029365:	89 83 64 06 00 00    	mov    DWORD PTR [ebx+0x664],eax
1002936b:	8b 84 39 08 02 00 00 	mov    eax,DWORD PTR [ecx+edi*1+0x208]
10029372:	89 83 68 06 00 00    	mov    DWORD PTR [ebx+0x668],eax
10029378:	8b 84 39 0c 02 00 00 	mov    eax,DWORD PTR [ecx+edi*1+0x20c]
1002937f:	89 83 6c 06 00 00    	mov    DWORD PTR [ebx+0x66c],eax
10029385:	8b 84 39 10 02 00 00 	mov    eax,DWORD PTR [ecx+edi*1+0x210]
1002938c:	89 83 70 06 00 00    	mov    DWORD PTR [ebx+0x670],eax
10029392:	8b 84 39 14 02 00 00 	mov    eax,DWORD PTR [ecx+edi*1+0x214]
10029399:	89 83 74 06 00 00    	mov    DWORD PTR [ebx+0x674],eax
1002939f:	8a 84 39 18 02 00 00 	mov    al,BYTE PTR [ecx+edi*1+0x218]
100293a6:	88 83 78 06 00 00    	mov    BYTE PTR [ebx+0x678],al
100293ac:	8b 84 39 1c 02 00 00 	mov    eax,DWORD PTR [ecx+edi*1+0x21c]
100293b3:	89 83 7c 06 00 00    	mov    DWORD PTR [ebx+0x67c],eax
100293b9:	8a 84 39 20 02 00 00 	mov    al,BYTE PTR [ecx+edi*1+0x220]
100293c0:	88 83 80 06 00 00    	mov    BYTE PTR [ebx+0x680],al
100293c6:	e8 a5 d1 09 00       	call   0x100c6570
100293cb:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100293ce:	83 c4 04             	add    esp,0x4
100293d1:	33 f6                	xor    esi,esi
100293d3:	81 c3 40 25 00 00    	add    ebx,0x2540
100293d9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100293e0:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100293e3:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100293e9:	6a 00                	push   0x0
100293eb:	ff 35 e8 64 22 10    	push   DWORD PTR ds:0x102264e8
100293f1:	6a 01                	push   0x1
100293f3:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100293f9:	56                   	push   esi
100293fa:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10029400:	ff 33                	push   DWORD PTR [ebx]
10029402:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
10029408:	83 c4 18             	add    esp,0x18
1002940b:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
10029411:	46                   	inc    esi
10029412:	8d 5b 04             	lea    ebx,[ebx+0x4]
10029415:	83 fe 20             	cmp    esi,0x20
10029418:	7c c6                	jl     0x100293e0
1002941a:	8b 7d f4             	mov    edi,DWORD PTR [ebp-0xc]
1002941d:	69 c6 1c 04 00 00    	imul   eax,esi,0x41c
10029423:	83 c7 04             	add    edi,0x4
10029426:	68 1c 04 00 00       	push   0x41c
1002942b:	6a 00                	push   0x0
1002942d:	03 c7                	add    eax,edi
1002942f:	50                   	push   eax
10029430:	e8 5b 60 11 00       	call   0x1013f490
10029435:	83 c4 0c             	add    esp,0xc
10029438:	b0 01                	mov    al,0x1
1002943a:	5f                   	pop    edi
1002943b:	5e                   	pop    esi
1002943c:	5b                   	pop    ebx
1002943d:	8b e5                	mov    esp,ebp
1002943f:	5d                   	pop    ebp
10029440:	c2 04 00             	ret    0x4
10029443:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
10029446:	8d 97 fd 03 00 00    	lea    edx,[edi+0x3fd]
1002944c:	69 f6 1c 04 00 00    	imul   esi,esi,0x41c
10029452:	b9 01 00 00 00       	mov    ecx,0x1
10029457:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
1002945a:	03 d6                	add    edx,esi
1002945c:	66 0f 6e 44 3e 4c    	movd   xmm0,DWORD PTR [esi+edi*1+0x4c]
10029462:	0f 5b c0             	cvtdq2ps xmm0,xmm0
10029465:	f3 0f 11 80 64 01 00 	movss  DWORD PTR [eax+0x164],xmm0
1002946c:	00 
1002946d:	66 0f 6e 44 3e 50    	movd   xmm0,DWORD PTR [esi+edi*1+0x50]
10029473:	0f 5b c0             	cvtdq2ps xmm0,xmm0
10029476:	f3 0f 11 83 f0 21 00 	movss  DWORD PTR [ebx+0x21f0],xmm0
1002947d:	00 
1002947e:	8b 44 3e 08          	mov    eax,DWORD PTR [esi+edi*1+0x8]
10029482:	89 83 b4 03 00 00    	mov    DWORD PTR [ebx+0x3b4],eax
10029488:	8b 84 3e 28 02 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x228]
1002948f:	89 83 dc 03 00 00    	mov    DWORD PTR [ebx+0x3dc],eax
10029495:	8b 84 3e 2c 02 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x22c]
1002949c:	89 83 e0 03 00 00    	mov    DWORD PTR [ebx+0x3e0],eax
100294a2:	8b 84 3e 30 02 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x230]
100294a9:	89 83 e4 03 00 00    	mov    DWORD PTR [ebx+0x3e4],eax
100294af:	8b 84 3e dc 01 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x1dc]
100294b6:	89 83 3c 06 00 00    	mov    DWORD PTR [ebx+0x63c],eax
100294bc:	8b 84 3e e0 01 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x1e0]
100294c3:	89 83 40 06 00 00    	mov    DWORD PTR [ebx+0x640],eax
100294c9:	8b 84 3e e4 01 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x1e4]
100294d0:	89 83 44 06 00 00    	mov    DWORD PTR [ebx+0x644],eax
100294d6:	8b 84 3e e8 01 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x1e8]
100294dd:	89 83 48 06 00 00    	mov    DWORD PTR [ebx+0x648],eax
100294e3:	8b 84 3e ec 01 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x1ec]
100294ea:	89 83 4c 06 00 00    	mov    DWORD PTR [ebx+0x64c],eax
100294f0:	8b 84 3e f0 01 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x1f0]
100294f7:	89 83 50 06 00 00    	mov    DWORD PTR [ebx+0x650],eax
100294fd:	8b 84 3e f4 01 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x1f4]
10029504:	89 83 54 06 00 00    	mov    DWORD PTR [ebx+0x654],eax
1002950a:	8b 84 3e f8 01 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x1f8]
10029511:	89 83 58 06 00 00    	mov    DWORD PTR [ebx+0x658],eax
10029517:	8b 84 3e fc 01 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x1fc]
1002951e:	89 83 5c 06 00 00    	mov    DWORD PTR [ebx+0x65c],eax
10029524:	8b 84 3e 00 02 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x200]
1002952b:	89 83 60 06 00 00    	mov    DWORD PTR [ebx+0x660],eax
10029531:	8b 84 3e 04 02 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x204]
10029538:	89 83 64 06 00 00    	mov    DWORD PTR [ebx+0x664],eax
1002953e:	8b 84 3e 08 02 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x208]
10029545:	89 83 68 06 00 00    	mov    DWORD PTR [ebx+0x668],eax
1002954b:	8b 84 3e 0c 02 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x20c]
10029552:	89 83 6c 06 00 00    	mov    DWORD PTR [ebx+0x66c],eax
10029558:	8b 84 3e 10 02 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x210]
1002955f:	89 83 70 06 00 00    	mov    DWORD PTR [ebx+0x670],eax
10029565:	8b 84 3e 14 02 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x214]
1002956c:	89 83 74 06 00 00    	mov    DWORD PTR [ebx+0x674],eax
10029572:	8a 84 3e 18 02 00 00 	mov    al,BYTE PTR [esi+edi*1+0x218]
10029579:	88 83 78 06 00 00    	mov    BYTE PTR [ebx+0x678],al
1002957f:	8b 84 3e 1c 02 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x21c]
10029586:	89 83 7c 06 00 00    	mov    DWORD PTR [ebx+0x67c],eax
1002958c:	8a 84 3e 20 02 00 00 	mov    al,BYTE PTR [esi+edi*1+0x220]
10029593:	88 83 80 06 00 00    	mov    BYTE PTR [ebx+0x680],al
10029599:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100295a0:	8a 02                	mov    al,BYTE PTR [edx]
100295a2:	8d 52 01             	lea    edx,[edx+0x1]
100295a5:	88 84 0b f4 03 00 00 	mov    BYTE PTR [ebx+ecx*1+0x3f4],al
100295ac:	41                   	inc    ecx
100295ad:	83 f9 20             	cmp    ecx,0x20
100295b0:	7e ee                	jle    0x100295a0
100295b2:	8d 8f 7c 02 00 00    	lea    ecx,[edi+0x27c]
100295b8:	8b d3                	mov    edx,ebx
100295ba:	03 ce                	add    ecx,esi
100295bc:	2b d1                	sub    edx,ecx
100295be:	66 90                	xchg   ax,ax
100295c0:	8a 01                	mov    al,BYTE PTR [ecx]
100295c2:	8d 49 01             	lea    ecx,[ecx+0x1]
100295c5:	88 84 0a 4b 20 00 00 	mov    BYTE PTR [edx+ecx*1+0x204b],al
100295cc:	84 c0                	test   al,al
100295ce:	75 f0                	jne    0x100295c0
100295d0:	8d 8f fc 02 00 00    	lea    ecx,[edi+0x2fc]
100295d6:	8b d3                	mov    edx,ebx
100295d8:	03 ce                	add    ecx,esi
100295da:	2b d1                	sub    edx,ecx
100295dc:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100295e0:	8a 01                	mov    al,BYTE PTR [ecx]
100295e2:	8d 49 01             	lea    ecx,[ecx+0x1]
100295e5:	88 84 0a cb 20 00 00 	mov    BYTE PTR [edx+ecx*1+0x20cb],al
100295ec:	84 c0                	test   al,al
100295ee:	75 f0                	jne    0x100295e0
100295f0:	8d 8f 7c 03 00 00    	lea    ecx,[edi+0x37c]
100295f6:	8b d3                	mov    edx,ebx
100295f8:	03 ce                	add    ecx,esi
100295fa:	2b d1                	sub    edx,ecx
100295fc:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
10029600:	8a 01                	mov    al,BYTE PTR [ecx]
10029602:	8d 49 01             	lea    ecx,[ecx+0x1]
10029605:	88 84 0a 4b 21 00 00 	mov    BYTE PTR [edx+ecx*1+0x214b],al
1002960c:	84 c0                	test   al,al
1002960e:	75 f0                	jne    0x10029600
10029610:	8b 8c 3e 34 02 00 00 	mov    ecx,DWORD PTR [esi+edi*1+0x234]
10029617:	85 c9                	test   ecx,ecx
10029619:	0f 84 6b 01 00 00    	je     0x1002978a
1002961f:	0f b6 44 3e 18       	movzx  eax,BYTE PTR [esi+edi*1+0x18]
10029624:	50                   	push   eax
10029625:	6a 00                	push   0x0
10029627:	51                   	push   ecx
10029628:	8b cb                	mov    ecx,ebx
1002962a:	e8 51 74 0b 00       	call   0x100e0a80
1002962f:	8b 84 3e 34 02 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x234]
10029636:	b9 bc c2 1a 10       	mov    ecx,0x101ac2bc
1002963b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
10029640:	8a 10                	mov    dl,BYTE PTR [eax]
10029642:	3a 11                	cmp    dl,BYTE PTR [ecx]
10029644:	75 1a                	jne    0x10029660
10029646:	84 d2                	test   dl,dl
10029648:	74 12                	je     0x1002965c
1002964a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002964d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10029650:	75 0e                	jne    0x10029660
10029652:	83 c0 02             	add    eax,0x2
10029655:	83 c1 02             	add    ecx,0x2
10029658:	84 d2                	test   dl,dl
1002965a:	75 e4                	jne    0x10029640
1002965c:	33 c0                	xor    eax,eax
1002965e:	eb 05                	jmp    0x10029665
10029660:	1b c0                	sbb    eax,eax
10029662:	83 c8 01             	or     eax,0x1
10029665:	85 c0                	test   eax,eax
10029667:	75 37                	jne    0x100296a0
10029669:	50                   	push   eax
1002966a:	50                   	push   eax
1002966b:	ff 35 dc 66 22 10    	push   DWORD PTR ds:0x102266dc
10029671:	6a 02                	push   0x2
10029673:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
10029679:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1002967c:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10029682:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
10029688:	50                   	push   eax
10029689:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1002968f:	6a 01                	push   0x1
10029691:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10029697:	83 c4 1c             	add    esp,0x1c
1002969a:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100296a0:	81 c3 14 25 00 00    	add    ebx,0x2514
100296a6:	b8 06 00 00 00       	mov    eax,0x6
100296ab:	89 5d f4             	mov    DWORD PTR [ebp-0xc],ebx
100296ae:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
100296b1:	8b 1b                	mov    ebx,DWORD PTR [ebx]
100296b3:	85 db                	test   ebx,ebx
100296b5:	0f 84 b7 00 00 00    	je     0x10029772
100296bb:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100296be:	b9 e4 9a 1a 10       	mov    ecx,0x101a9ae4
100296c3:	8b 15 88 31 22 10    	mov    edx,DWORD PTR ds:0x10223188
100296c9:	8b 00                	mov    eax,DWORD PTR [eax]
100296cb:	03 82 98 00 00 00    	add    eax,DWORD PTR [edx+0x98]
100296d1:	8a 10                	mov    dl,BYTE PTR [eax]
100296d3:	3a 11                	cmp    dl,BYTE PTR [ecx]
100296d5:	75 1a                	jne    0x100296f1
100296d7:	84 d2                	test   dl,dl
100296d9:	74 12                	je     0x100296ed
100296db:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100296de:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100296e1:	75 0e                	jne    0x100296f1
100296e3:	83 c0 02             	add    eax,0x2
100296e6:	83 c1 02             	add    ecx,0x2
100296e9:	84 d2                	test   dl,dl
100296eb:	75 e4                	jne    0x100296d1
100296ed:	33 c0                	xor    eax,eax
100296ef:	eb 05                	jmp    0x100296f6
100296f1:	1b c0                	sbb    eax,eax
100296f3:	83 c8 01             	or     eax,0x1
100296f6:	85 c0                	test   eax,eax
100296f8:	74 75                	je     0x1002976f
100296fa:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
10029700:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10029703:	8b 15 88 31 22 10    	mov    edx,DWORD PTR ds:0x10223188
10029709:	8b 8c 3e 34 02 00 00 	mov    ecx,DWORD PTR [esi+edi*1+0x234]
10029710:	8b 00                	mov    eax,DWORD PTR [eax]
10029712:	03 82 98 00 00 00    	add    eax,DWORD PTR [edx+0x98]
10029718:	8a 10                	mov    dl,BYTE PTR [eax]
1002971a:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002971c:	75 1a                	jne    0x10029738
1002971e:	84 d2                	test   dl,dl
10029720:	74 12                	je     0x10029734
10029722:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10029725:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10029728:	75 0e                	jne    0x10029738
1002972a:	83 c0 02             	add    eax,0x2
1002972d:	83 c1 02             	add    ecx,0x2
10029730:	84 d2                	test   dl,dl
10029732:	75 e4                	jne    0x10029718
10029734:	33 c0                	xor    eax,eax
10029736:	eb 05                	jmp    0x1002973d
10029738:	1b c0                	sbb    eax,eax
1002973a:	83 c8 01             	or     eax,0x1
1002973d:	85 c0                	test   eax,eax
1002973f:	75 24                	jne    0x10029765
10029741:	8b 84 3e 38 02 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x238]
10029748:	8b 8b dc 01 00 00    	mov    ecx,DWORD PTR [ebx+0x1dc]
1002974e:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
10029751:	89 83 e4 01 00 00    	mov    DWORD PTR [ebx+0x1e4],eax
10029757:	8b 84 3e 3c 02 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x23c]
1002975e:	89 84 8a 40 25 00 00 	mov    DWORD PTR [edx+ecx*4+0x2540],eax
10029765:	8b 9b 64 01 00 00    	mov    ebx,DWORD PTR [ebx+0x164]
1002976b:	85 db                	test   ebx,ebx
1002976d:	75 91                	jne    0x10029700
1002976f:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
10029772:	8b 5d f4             	mov    ebx,DWORD PTR [ebp-0xc]
10029775:	83 c3 04             	add    ebx,0x4
10029778:	83 e8 01             	sub    eax,0x1
1002977b:	89 5d f4             	mov    DWORD PTR [ebp-0xc],ebx
1002977e:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
10029781:	0f 85 2a ff ff ff    	jne    0x100296b1
10029787:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
1002978a:	8b 8c 3e 40 02 00 00 	mov    ecx,DWORD PTR [esi+edi*1+0x240]
10029791:	85 c9                	test   ecx,ecx
10029793:	0f 84 5e 01 00 00    	je     0x100298f7
10029799:	0f b6 44 3e 18       	movzx  eax,BYTE PTR [esi+edi*1+0x18]
1002979e:	50                   	push   eax
1002979f:	6a 00                	push   0x0
100297a1:	51                   	push   ecx
100297a2:	8b cb                	mov    ecx,ebx
100297a4:	e8 d7 72 0b 00       	call   0x100e0a80
100297a9:	8b 84 3e 40 02 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x240]
100297b0:	b9 bc c2 1a 10       	mov    ecx,0x101ac2bc
100297b5:	8a 10                	mov    dl,BYTE PTR [eax]
100297b7:	3a 11                	cmp    dl,BYTE PTR [ecx]
100297b9:	75 1a                	jne    0x100297d5
100297bb:	84 d2                	test   dl,dl
100297bd:	74 12                	je     0x100297d1
100297bf:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100297c2:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100297c5:	75 0e                	jne    0x100297d5
100297c7:	83 c0 02             	add    eax,0x2
100297ca:	83 c1 02             	add    ecx,0x2
100297cd:	84 d2                	test   dl,dl
100297cf:	75 e4                	jne    0x100297b5
100297d1:	33 c0                	xor    eax,eax
100297d3:	eb 05                	jmp    0x100297da
100297d5:	1b c0                	sbb    eax,eax
100297d7:	83 c8 01             	or     eax,0x1
100297da:	85 c0                	test   eax,eax
100297dc:	75 37                	jne    0x10029815
100297de:	50                   	push   eax
100297df:	50                   	push   eax
100297e0:	ff 35 dc 66 22 10    	push   DWORD PTR ds:0x102266dc
100297e6:	6a 02                	push   0x2
100297e8:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100297ee:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100297f1:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100297f7:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
100297fd:	50                   	push   eax
100297fe:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10029804:	6a 01                	push   0x1
10029806:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1002980c:	83 c4 1c             	add    esp,0x1c
1002980f:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
10029815:	81 c3 14 25 00 00    	add    ebx,0x2514
1002981b:	b8 06 00 00 00       	mov    eax,0x6
10029820:	89 5d f4             	mov    DWORD PTR [ebp-0xc],ebx
10029823:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
10029826:	8b 1b                	mov    ebx,DWORD PTR [ebx]
10029828:	85 db                	test   ebx,ebx
1002982a:	0f 84 b2 00 00 00    	je     0x100298e2
10029830:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10029833:	b9 e4 9a 1a 10       	mov    ecx,0x101a9ae4
10029838:	8b 15 88 31 22 10    	mov    edx,DWORD PTR ds:0x10223188
1002983e:	8b 00                	mov    eax,DWORD PTR [eax]
10029840:	03 82 98 00 00 00    	add    eax,DWORD PTR [edx+0x98]
10029846:	8a 10                	mov    dl,BYTE PTR [eax]
10029848:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002984a:	75 1a                	jne    0x10029866
1002984c:	84 d2                	test   dl,dl
1002984e:	74 12                	je     0x10029862
10029850:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10029853:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10029856:	75 0e                	jne    0x10029866
10029858:	83 c0 02             	add    eax,0x2
1002985b:	83 c1 02             	add    ecx,0x2
1002985e:	84 d2                	test   dl,dl
10029860:	75 e4                	jne    0x10029846
10029862:	33 c0                	xor    eax,eax
10029864:	eb 05                	jmp    0x1002986b
10029866:	1b c0                	sbb    eax,eax
10029868:	83 c8 01             	or     eax,0x1
1002986b:	85 c0                	test   eax,eax
1002986d:	74 70                	je     0x100298df
1002986f:	90                   	nop
10029870:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10029873:	8b 15 88 31 22 10    	mov    edx,DWORD PTR ds:0x10223188
10029879:	8b 8c 3e 40 02 00 00 	mov    ecx,DWORD PTR [esi+edi*1+0x240]
10029880:	8b 00                	mov    eax,DWORD PTR [eax]
10029882:	03 82 98 00 00 00    	add    eax,DWORD PTR [edx+0x98]
10029888:	8a 10                	mov    dl,BYTE PTR [eax]
1002988a:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002988c:	75 1a                	jne    0x100298a8
1002988e:	84 d2                	test   dl,dl
10029890:	74 12                	je     0x100298a4
10029892:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10029895:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10029898:	75 0e                	jne    0x100298a8
1002989a:	83 c0 02             	add    eax,0x2
1002989d:	83 c1 02             	add    ecx,0x2
100298a0:	84 d2                	test   dl,dl
100298a2:	75 e4                	jne    0x10029888
100298a4:	33 c0                	xor    eax,eax
100298a6:	eb 05                	jmp    0x100298ad
100298a8:	1b c0                	sbb    eax,eax
100298aa:	83 c8 01             	or     eax,0x1
100298ad:	85 c0                	test   eax,eax
100298af:	75 24                	jne    0x100298d5
100298b1:	8b 84 3e 44 02 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x244]
100298b8:	8b 8b dc 01 00 00    	mov    ecx,DWORD PTR [ebx+0x1dc]
100298be:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
100298c1:	89 83 e4 01 00 00    	mov    DWORD PTR [ebx+0x1e4],eax
100298c7:	8b 84 3e 48 02 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x248]
100298ce:	89 84 8a 40 25 00 00 	mov    DWORD PTR [edx+ecx*4+0x2540],eax
100298d5:	8b 9b 64 01 00 00    	mov    ebx,DWORD PTR [ebx+0x164]
100298db:	85 db                	test   ebx,ebx
100298dd:	75 91                	jne    0x10029870
100298df:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
100298e2:	8b 5d f4             	mov    ebx,DWORD PTR [ebp-0xc]
100298e5:	83 c3 04             	add    ebx,0x4
100298e8:	83 e8 01             	sub    eax,0x1
100298eb:	89 5d f4             	mov    DWORD PTR [ebp-0xc],ebx
100298ee:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
100298f1:	0f 85 2f ff ff ff    	jne    0x10029826
100298f7:	8b 8c 3e 4c 02 00 00 	mov    ecx,DWORD PTR [esi+edi*1+0x24c]
100298fe:	85 c9                	test   ecx,ecx
10029900:	0f 84 71 01 00 00    	je     0x10029a77
10029906:	0f b6 44 3e 18       	movzx  eax,BYTE PTR [esi+edi*1+0x18]
1002990b:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
1002990e:	50                   	push   eax
1002990f:	6a 00                	push   0x0
10029911:	51                   	push   ecx
10029912:	8b cb                	mov    ecx,ebx
10029914:	e8 67 71 0b 00       	call   0x100e0a80
10029919:	8b 84 3e 4c 02 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x24c]
10029920:	b9 bc c2 1a 10       	mov    ecx,0x101ac2bc
10029925:	8a 10                	mov    dl,BYTE PTR [eax]
10029927:	3a 11                	cmp    dl,BYTE PTR [ecx]
10029929:	75 1a                	jne    0x10029945
1002992b:	84 d2                	test   dl,dl
1002992d:	74 12                	je     0x10029941
1002992f:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10029932:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10029935:	75 0e                	jne    0x10029945
10029937:	83 c0 02             	add    eax,0x2
1002993a:	83 c1 02             	add    ecx,0x2
1002993d:	84 d2                	test   dl,dl
1002993f:	75 e4                	jne    0x10029925
10029941:	33 c0                	xor    eax,eax
10029943:	eb 05                	jmp    0x1002994a
10029945:	1b c0                	sbb    eax,eax
10029947:	83 c8 01             	or     eax,0x1
1002994a:	85 c0                	test   eax,eax
1002994c:	75 37                	jne    0x10029985
1002994e:	50                   	push   eax
1002994f:	50                   	push   eax
10029950:	ff 35 dc 66 22 10    	push   DWORD PTR ds:0x102266dc
10029956:	6a 02                	push   0x2
10029958:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1002995e:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10029961:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10029967:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
1002996d:	50                   	push   eax
1002996e:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10029974:	6a 01                	push   0x1
10029976:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1002997c:	83 c4 1c             	add    esp,0x1c
1002997f:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
10029985:	81 c3 14 25 00 00    	add    ebx,0x2514
1002998b:	b8 06 00 00 00       	mov    eax,0x6
10029990:	89 5d f4             	mov    DWORD PTR [ebp-0xc],ebx
10029993:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
10029996:	8b 1b                	mov    ebx,DWORD PTR [ebx]
10029998:	85 db                	test   ebx,ebx
1002999a:	0f 84 c2 00 00 00    	je     0x10029a62
100299a0:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100299a3:	b9 e4 9a 1a 10       	mov    ecx,0x101a9ae4
100299a8:	8b 15 88 31 22 10    	mov    edx,DWORD PTR ds:0x10223188
100299ae:	8b 00                	mov    eax,DWORD PTR [eax]
100299b0:	03 82 98 00 00 00    	add    eax,DWORD PTR [edx+0x98]
100299b6:	8a 10                	mov    dl,BYTE PTR [eax]
100299b8:	3a 11                	cmp    dl,BYTE PTR [ecx]
100299ba:	75 1a                	jne    0x100299d6
100299bc:	84 d2                	test   dl,dl
100299be:	74 12                	je     0x100299d2
100299c0:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100299c3:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100299c6:	75 0e                	jne    0x100299d6
100299c8:	83 c0 02             	add    eax,0x2
100299cb:	83 c1 02             	add    ecx,0x2
100299ce:	84 d2                	test   dl,dl
100299d0:	75 e4                	jne    0x100299b6
100299d2:	33 c0                	xor    eax,eax
100299d4:	eb 05                	jmp    0x100299db
100299d6:	1b c0                	sbb    eax,eax
100299d8:	83 c8 01             	or     eax,0x1
100299db:	85 c0                	test   eax,eax
100299dd:	0f 84 7c 00 00 00    	je     0x10029a5f
100299e3:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100299e7:	66 0f 1f 84 00 00 00 	nop    WORD PTR [eax+eax*1+0x0]
100299ee:	00 00 
100299f0:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100299f3:	8b 15 88 31 22 10    	mov    edx,DWORD PTR ds:0x10223188
100299f9:	8b 8c 3e 4c 02 00 00 	mov    ecx,DWORD PTR [esi+edi*1+0x24c]
10029a00:	8b 00                	mov    eax,DWORD PTR [eax]
10029a02:	03 82 98 00 00 00    	add    eax,DWORD PTR [edx+0x98]
10029a08:	8a 10                	mov    dl,BYTE PTR [eax]
10029a0a:	3a 11                	cmp    dl,BYTE PTR [ecx]
10029a0c:	75 1a                	jne    0x10029a28
10029a0e:	84 d2                	test   dl,dl
10029a10:	74 12                	je     0x10029a24
10029a12:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10029a15:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10029a18:	75 0e                	jne    0x10029a28
10029a1a:	83 c0 02             	add    eax,0x2
10029a1d:	83 c1 02             	add    ecx,0x2
10029a20:	84 d2                	test   dl,dl
10029a22:	75 e4                	jne    0x10029a08
10029a24:	33 c0                	xor    eax,eax
10029a26:	eb 05                	jmp    0x10029a2d
10029a28:	1b c0                	sbb    eax,eax
10029a2a:	83 c8 01             	or     eax,0x1
10029a2d:	85 c0                	test   eax,eax
10029a2f:	75 24                	jne    0x10029a55
10029a31:	8b 84 3e 50 02 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x250]
10029a38:	8b 8b dc 01 00 00    	mov    ecx,DWORD PTR [ebx+0x1dc]
10029a3e:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
10029a41:	89 83 e4 01 00 00    	mov    DWORD PTR [ebx+0x1e4],eax
10029a47:	8b 84 3e 54 02 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x254]
10029a4e:	89 84 8a 40 25 00 00 	mov    DWORD PTR [edx+ecx*4+0x2540],eax
10029a55:	8b 9b 64 01 00 00    	mov    ebx,DWORD PTR [ebx+0x164]
10029a5b:	85 db                	test   ebx,ebx
10029a5d:	75 91                	jne    0x100299f0
10029a5f:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
10029a62:	8b 5d f4             	mov    ebx,DWORD PTR [ebp-0xc]
10029a65:	83 c3 04             	add    ebx,0x4
10029a68:	83 e8 01             	sub    eax,0x1
10029a6b:	89 5d f4             	mov    DWORD PTR [ebp-0xc],ebx
10029a6e:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
10029a71:	0f 85 1f ff ff ff    	jne    0x10029996
10029a77:	8b 8c 3e 58 02 00 00 	mov    ecx,DWORD PTR [esi+edi*1+0x258]
10029a7e:	85 c9                	test   ecx,ecx
10029a80:	0f 84 71 01 00 00    	je     0x10029bf7
10029a86:	0f b6 44 3e 18       	movzx  eax,BYTE PTR [esi+edi*1+0x18]
10029a8b:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
10029a8e:	50                   	push   eax
10029a8f:	6a 00                	push   0x0
10029a91:	51                   	push   ecx
10029a92:	8b cb                	mov    ecx,ebx
10029a94:	e8 e7 6f 0b 00       	call   0x100e0a80
10029a99:	8b 84 3e 58 02 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x258]
10029aa0:	b9 bc c2 1a 10       	mov    ecx,0x101ac2bc
10029aa5:	8a 10                	mov    dl,BYTE PTR [eax]
10029aa7:	3a 11                	cmp    dl,BYTE PTR [ecx]
10029aa9:	75 1a                	jne    0x10029ac5
10029aab:	84 d2                	test   dl,dl
10029aad:	74 12                	je     0x10029ac1
10029aaf:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10029ab2:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10029ab5:	75 0e                	jne    0x10029ac5
10029ab7:	83 c0 02             	add    eax,0x2
10029aba:	83 c1 02             	add    ecx,0x2
10029abd:	84 d2                	test   dl,dl
10029abf:	75 e4                	jne    0x10029aa5
10029ac1:	33 c0                	xor    eax,eax
10029ac3:	eb 05                	jmp    0x10029aca
10029ac5:	1b c0                	sbb    eax,eax
10029ac7:	83 c8 01             	or     eax,0x1
10029aca:	85 c0                	test   eax,eax
10029acc:	75 37                	jne    0x10029b05
10029ace:	50                   	push   eax
10029acf:	50                   	push   eax
10029ad0:	ff 35 dc 66 22 10    	push   DWORD PTR ds:0x102266dc
10029ad6:	6a 02                	push   0x2
10029ad8:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
10029ade:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10029ae1:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10029ae7:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
10029aed:	50                   	push   eax
10029aee:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10029af4:	6a 01                	push   0x1
10029af6:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10029afc:	83 c4 1c             	add    esp,0x1c
10029aff:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
10029b05:	81 c3 14 25 00 00    	add    ebx,0x2514
10029b0b:	b8 06 00 00 00       	mov    eax,0x6
10029b10:	89 5d f4             	mov    DWORD PTR [ebp-0xc],ebx
10029b13:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
10029b16:	8b 1b                	mov    ebx,DWORD PTR [ebx]
10029b18:	85 db                	test   ebx,ebx
10029b1a:	0f 84 c2 00 00 00    	je     0x10029be2
10029b20:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10029b23:	b9 e4 9a 1a 10       	mov    ecx,0x101a9ae4
10029b28:	8b 15 88 31 22 10    	mov    edx,DWORD PTR ds:0x10223188
10029b2e:	8b 00                	mov    eax,DWORD PTR [eax]
10029b30:	03 82 98 00 00 00    	add    eax,DWORD PTR [edx+0x98]
10029b36:	8a 10                	mov    dl,BYTE PTR [eax]
10029b38:	3a 11                	cmp    dl,BYTE PTR [ecx]
10029b3a:	75 1a                	jne    0x10029b56
10029b3c:	84 d2                	test   dl,dl
10029b3e:	74 12                	je     0x10029b52
10029b40:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10029b43:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10029b46:	75 0e                	jne    0x10029b56
10029b48:	83 c0 02             	add    eax,0x2
10029b4b:	83 c1 02             	add    ecx,0x2
10029b4e:	84 d2                	test   dl,dl
10029b50:	75 e4                	jne    0x10029b36
10029b52:	33 c0                	xor    eax,eax
10029b54:	eb 05                	jmp    0x10029b5b
10029b56:	1b c0                	sbb    eax,eax
10029b58:	83 c8 01             	or     eax,0x1
10029b5b:	85 c0                	test   eax,eax
10029b5d:	0f 84 7c 00 00 00    	je     0x10029bdf
10029b63:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
10029b67:	66 0f 1f 84 00 00 00 	nop    WORD PTR [eax+eax*1+0x0]
10029b6e:	00 00 
10029b70:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10029b73:	8b 15 88 31 22 10    	mov    edx,DWORD PTR ds:0x10223188
10029b79:	8b 8c 3e 58 02 00 00 	mov    ecx,DWORD PTR [esi+edi*1+0x258]
10029b80:	8b 00                	mov    eax,DWORD PTR [eax]
10029b82:	03 82 98 00 00 00    	add    eax,DWORD PTR [edx+0x98]
10029b88:	8a 10                	mov    dl,BYTE PTR [eax]
10029b8a:	3a 11                	cmp    dl,BYTE PTR [ecx]
10029b8c:	75 1a                	jne    0x10029ba8
10029b8e:	84 d2                	test   dl,dl
10029b90:	74 12                	je     0x10029ba4
10029b92:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10029b95:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10029b98:	75 0e                	jne    0x10029ba8
10029b9a:	83 c0 02             	add    eax,0x2
10029b9d:	83 c1 02             	add    ecx,0x2
10029ba0:	84 d2                	test   dl,dl
10029ba2:	75 e4                	jne    0x10029b88
10029ba4:	33 c0                	xor    eax,eax
10029ba6:	eb 05                	jmp    0x10029bad
10029ba8:	1b c0                	sbb    eax,eax
10029baa:	83 c8 01             	or     eax,0x1
10029bad:	85 c0                	test   eax,eax
10029baf:	75 24                	jne    0x10029bd5
10029bb1:	8b 84 3e 5c 02 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x25c]
10029bb8:	8b 8b dc 01 00 00    	mov    ecx,DWORD PTR [ebx+0x1dc]
10029bbe:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
10029bc1:	89 83 e4 01 00 00    	mov    DWORD PTR [ebx+0x1e4],eax
10029bc7:	8b 84 3e 60 02 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x260]
10029bce:	89 84 8a 40 25 00 00 	mov    DWORD PTR [edx+ecx*4+0x2540],eax
10029bd5:	8b 9b 64 01 00 00    	mov    ebx,DWORD PTR [ebx+0x164]
10029bdb:	85 db                	test   ebx,ebx
10029bdd:	75 91                	jne    0x10029b70
10029bdf:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
10029be2:	8b 5d f4             	mov    ebx,DWORD PTR [ebp-0xc]
10029be5:	83 c3 04             	add    ebx,0x4
10029be8:	83 e8 01             	sub    eax,0x1
10029beb:	89 5d f4             	mov    DWORD PTR [ebp-0xc],ebx
10029bee:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
10029bf1:	0f 85 1f ff ff ff    	jne    0x10029b16
10029bf7:	8b 8c 3e 64 02 00 00 	mov    ecx,DWORD PTR [esi+edi*1+0x264]
10029bfe:	85 c9                	test   ecx,ecx
10029c00:	0f 84 71 01 00 00    	je     0x10029d77
10029c06:	0f b6 44 3e 18       	movzx  eax,BYTE PTR [esi+edi*1+0x18]
10029c0b:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
10029c0e:	50                   	push   eax
10029c0f:	6a 00                	push   0x0
10029c11:	51                   	push   ecx
10029c12:	8b cb                	mov    ecx,ebx
10029c14:	e8 67 6e 0b 00       	call   0x100e0a80
10029c19:	8b 84 3e 64 02 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x264]
10029c20:	b9 bc c2 1a 10       	mov    ecx,0x101ac2bc
10029c25:	8a 10                	mov    dl,BYTE PTR [eax]
10029c27:	3a 11                	cmp    dl,BYTE PTR [ecx]
10029c29:	75 1a                	jne    0x10029c45
10029c2b:	84 d2                	test   dl,dl
10029c2d:	74 12                	je     0x10029c41
10029c2f:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10029c32:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10029c35:	75 0e                	jne    0x10029c45
10029c37:	83 c0 02             	add    eax,0x2
10029c3a:	83 c1 02             	add    ecx,0x2
10029c3d:	84 d2                	test   dl,dl
10029c3f:	75 e4                	jne    0x10029c25
10029c41:	33 c0                	xor    eax,eax
10029c43:	eb 05                	jmp    0x10029c4a
10029c45:	1b c0                	sbb    eax,eax
10029c47:	83 c8 01             	or     eax,0x1
10029c4a:	85 c0                	test   eax,eax
10029c4c:	75 37                	jne    0x10029c85
10029c4e:	50                   	push   eax
10029c4f:	50                   	push   eax
10029c50:	ff 35 dc 66 22 10    	push   DWORD PTR ds:0x102266dc
10029c56:	6a 02                	push   0x2
10029c58:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
10029c5e:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10029c61:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10029c67:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
10029c6d:	50                   	push   eax
10029c6e:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10029c74:	6a 01                	push   0x1
10029c76:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10029c7c:	83 c4 1c             	add    esp,0x1c
10029c7f:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
10029c85:	81 c3 14 25 00 00    	add    ebx,0x2514
10029c8b:	b8 06 00 00 00       	mov    eax,0x6
10029c90:	89 5d f4             	mov    DWORD PTR [ebp-0xc],ebx
10029c93:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
10029c96:	8b 1b                	mov    ebx,DWORD PTR [ebx]
10029c98:	85 db                	test   ebx,ebx
10029c9a:	0f 84 c2 00 00 00    	je     0x10029d62
10029ca0:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10029ca3:	b9 e4 9a 1a 10       	mov    ecx,0x101a9ae4
10029ca8:	8b 15 88 31 22 10    	mov    edx,DWORD PTR ds:0x10223188
10029cae:	8b 00                	mov    eax,DWORD PTR [eax]
10029cb0:	03 82 98 00 00 00    	add    eax,DWORD PTR [edx+0x98]
10029cb6:	8a 10                	mov    dl,BYTE PTR [eax]
10029cb8:	3a 11                	cmp    dl,BYTE PTR [ecx]
10029cba:	75 1a                	jne    0x10029cd6
10029cbc:	84 d2                	test   dl,dl
10029cbe:	74 12                	je     0x10029cd2
10029cc0:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10029cc3:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10029cc6:	75 0e                	jne    0x10029cd6
10029cc8:	83 c0 02             	add    eax,0x2
10029ccb:	83 c1 02             	add    ecx,0x2
10029cce:	84 d2                	test   dl,dl
10029cd0:	75 e4                	jne    0x10029cb6
10029cd2:	33 c0                	xor    eax,eax
10029cd4:	eb 05                	jmp    0x10029cdb
10029cd6:	1b c0                	sbb    eax,eax
10029cd8:	83 c8 01             	or     eax,0x1
10029cdb:	85 c0                	test   eax,eax
10029cdd:	0f 84 7c 00 00 00    	je     0x10029d5f
10029ce3:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
10029ce7:	66 0f 1f 84 00 00 00 	nop    WORD PTR [eax+eax*1+0x0]
10029cee:	00 00 
10029cf0:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10029cf3:	8b 15 88 31 22 10    	mov    edx,DWORD PTR ds:0x10223188
10029cf9:	8b 8c 3e 64 02 00 00 	mov    ecx,DWORD PTR [esi+edi*1+0x264]
10029d00:	8b 00                	mov    eax,DWORD PTR [eax]
10029d02:	03 82 98 00 00 00    	add    eax,DWORD PTR [edx+0x98]
10029d08:	8a 10                	mov    dl,BYTE PTR [eax]
10029d0a:	3a 11                	cmp    dl,BYTE PTR [ecx]
10029d0c:	75 1a                	jne    0x10029d28
10029d0e:	84 d2                	test   dl,dl
10029d10:	74 12                	je     0x10029d24
10029d12:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10029d15:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10029d18:	75 0e                	jne    0x10029d28
10029d1a:	83 c0 02             	add    eax,0x2
10029d1d:	83 c1 02             	add    ecx,0x2
10029d20:	84 d2                	test   dl,dl
10029d22:	75 e4                	jne    0x10029d08
10029d24:	33 c0                	xor    eax,eax
10029d26:	eb 05                	jmp    0x10029d2d
10029d28:	1b c0                	sbb    eax,eax
10029d2a:	83 c8 01             	or     eax,0x1
10029d2d:	85 c0                	test   eax,eax
10029d2f:	75 24                	jne    0x10029d55
10029d31:	8b 84 3e 68 02 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x268]
10029d38:	8b 8b dc 01 00 00    	mov    ecx,DWORD PTR [ebx+0x1dc]
10029d3e:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
10029d41:	89 83 e4 01 00 00    	mov    DWORD PTR [ebx+0x1e4],eax
10029d47:	8b 84 3e 6c 02 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x26c]
10029d4e:	89 84 8a 40 25 00 00 	mov    DWORD PTR [edx+ecx*4+0x2540],eax
10029d55:	8b 9b 64 01 00 00    	mov    ebx,DWORD PTR [ebx+0x164]
10029d5b:	85 db                	test   ebx,ebx
10029d5d:	75 91                	jne    0x10029cf0
10029d5f:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
10029d62:	8b 5d f4             	mov    ebx,DWORD PTR [ebp-0xc]
10029d65:	83 c3 04             	add    ebx,0x4
10029d68:	83 e8 01             	sub    eax,0x1
10029d6b:	89 5d f4             	mov    DWORD PTR [ebp-0xc],ebx
10029d6e:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
10029d71:	0f 85 1f ff ff ff    	jne    0x10029c96
10029d77:	8b 8c 3e 70 02 00 00 	mov    ecx,DWORD PTR [esi+edi*1+0x270]
10029d7e:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
10029d81:	85 c9                	test   ecx,ecx
10029d83:	0f 84 90 01 00 00    	je     0x10029f19
10029d89:	0f b6 44 3e 18       	movzx  eax,BYTE PTR [esi+edi*1+0x18]
10029d8e:	50                   	push   eax
10029d8f:	6a 00                	push   0x0
10029d91:	51                   	push   ecx
10029d92:	8b cb                	mov    ecx,ebx
10029d94:	e8 e7 6c 0b 00       	call   0x100e0a80
10029d99:	8b 84 3e 70 02 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x270]
10029da0:	b9 bc c2 1a 10       	mov    ecx,0x101ac2bc
10029da5:	8a 10                	mov    dl,BYTE PTR [eax]
10029da7:	3a 11                	cmp    dl,BYTE PTR [ecx]
10029da9:	75 1a                	jne    0x10029dc5
10029dab:	84 d2                	test   dl,dl
10029dad:	74 12                	je     0x10029dc1
10029daf:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10029db2:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10029db5:	75 0e                	jne    0x10029dc5
10029db7:	83 c0 02             	add    eax,0x2
10029dba:	83 c1 02             	add    ecx,0x2
10029dbd:	84 d2                	test   dl,dl
10029dbf:	75 e4                	jne    0x10029da5
10029dc1:	33 c0                	xor    eax,eax
10029dc3:	eb 05                	jmp    0x10029dca
10029dc5:	1b c0                	sbb    eax,eax
10029dc7:	83 c8 01             	or     eax,0x1
10029dca:	85 c0                	test   eax,eax
10029dcc:	75 37                	jne    0x10029e05
10029dce:	50                   	push   eax
10029dcf:	50                   	push   eax
10029dd0:	ff 35 dc 66 22 10    	push   DWORD PTR ds:0x102266dc
10029dd6:	6a 02                	push   0x2
10029dd8:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
10029dde:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10029de1:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10029de7:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
10029ded:	50                   	push   eax
10029dee:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10029df4:	6a 01                	push   0x1
10029df6:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10029dfc:	83 c4 1c             	add    esp,0x1c
10029dff:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
10029e05:	81 c3 14 25 00 00    	add    ebx,0x2514
10029e0b:	b8 06 00 00 00       	mov    eax,0x6
10029e10:	89 5d f4             	mov    DWORD PTR [ebp-0xc],ebx
10029e13:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
10029e16:	8b 1b                	mov    ebx,DWORD PTR [ebx]
10029e18:	85 db                	test   ebx,ebx
10029e1a:	0f 84 c2 00 00 00    	je     0x10029ee2
10029e20:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10029e23:	b9 e4 9a 1a 10       	mov    ecx,0x101a9ae4
10029e28:	8b 15 88 31 22 10    	mov    edx,DWORD PTR ds:0x10223188
10029e2e:	8b 00                	mov    eax,DWORD PTR [eax]
10029e30:	03 82 98 00 00 00    	add    eax,DWORD PTR [edx+0x98]
10029e36:	8a 10                	mov    dl,BYTE PTR [eax]
10029e38:	3a 11                	cmp    dl,BYTE PTR [ecx]
10029e3a:	75 1a                	jne    0x10029e56
10029e3c:	84 d2                	test   dl,dl
10029e3e:	74 12                	je     0x10029e52
10029e40:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10029e43:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10029e46:	75 0e                	jne    0x10029e56
10029e48:	83 c0 02             	add    eax,0x2
10029e4b:	83 c1 02             	add    ecx,0x2
10029e4e:	84 d2                	test   dl,dl
10029e50:	75 e4                	jne    0x10029e36
10029e52:	33 c0                	xor    eax,eax
10029e54:	eb 05                	jmp    0x10029e5b
10029e56:	1b c0                	sbb    eax,eax
10029e58:	83 c8 01             	or     eax,0x1
10029e5b:	85 c0                	test   eax,eax
10029e5d:	0f 84 7c 00 00 00    	je     0x10029edf
10029e63:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
10029e67:	66 0f 1f 84 00 00 00 	nop    WORD PTR [eax+eax*1+0x0]
10029e6e:	00 00 
10029e70:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10029e73:	8b 15 88 31 22 10    	mov    edx,DWORD PTR ds:0x10223188
10029e79:	8b 8c 3e 70 02 00 00 	mov    ecx,DWORD PTR [esi+edi*1+0x270]
10029e80:	8b 00                	mov    eax,DWORD PTR [eax]
10029e82:	03 82 98 00 00 00    	add    eax,DWORD PTR [edx+0x98]
10029e88:	8a 10                	mov    dl,BYTE PTR [eax]
10029e8a:	3a 11                	cmp    dl,BYTE PTR [ecx]
10029e8c:	75 1a                	jne    0x10029ea8
10029e8e:	84 d2                	test   dl,dl
10029e90:	74 12                	je     0x10029ea4
10029e92:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10029e95:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10029e98:	75 0e                	jne    0x10029ea8
10029e9a:	83 c0 02             	add    eax,0x2
10029e9d:	83 c1 02             	add    ecx,0x2
10029ea0:	84 d2                	test   dl,dl
10029ea2:	75 e4                	jne    0x10029e88
10029ea4:	33 c0                	xor    eax,eax
10029ea6:	eb 05                	jmp    0x10029ead
10029ea8:	1b c0                	sbb    eax,eax
10029eaa:	83 c8 01             	or     eax,0x1
10029ead:	85 c0                	test   eax,eax
10029eaf:	75 24                	jne    0x10029ed5
10029eb1:	8b 84 3e 74 02 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x274]
10029eb8:	8b 8b dc 01 00 00    	mov    ecx,DWORD PTR [ebx+0x1dc]
10029ebe:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
10029ec1:	89 83 e4 01 00 00    	mov    DWORD PTR [ebx+0x1e4],eax
10029ec7:	8b 84 3e 78 02 00 00 	mov    eax,DWORD PTR [esi+edi*1+0x278]
10029ece:	89 84 8a 40 25 00 00 	mov    DWORD PTR [edx+ecx*4+0x2540],eax
10029ed5:	8b 9b 64 01 00 00    	mov    ebx,DWORD PTR [ebx+0x164]
10029edb:	85 db                	test   ebx,ebx
10029edd:	75 91                	jne    0x10029e70
10029edf:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
10029ee2:	8b 5d f4             	mov    ebx,DWORD PTR [ebp-0xc]
10029ee5:	83 c3 04             	add    ebx,0x4
10029ee8:	83 e8 01             	sub    eax,0x1
10029eeb:	89 5d f4             	mov    DWORD PTR [ebp-0xc],ebx
10029eee:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
10029ef1:	0f 85 1f ff ff ff    	jne    0x10029e16
10029ef7:	8b 44 3e 10          	mov    eax,DWORD PTR [esi+edi*1+0x10]
10029efb:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
10029efe:	85 c0                	test   eax,eax
10029f00:	74 17                	je     0x10029f19
10029f02:	50                   	push   eax
10029f03:	8b cb                	mov    ecx,ebx
10029f05:	e8 76 84 0b 00       	call   0x100e2380
10029f0a:	85 c0                	test   eax,eax
10029f0c:	74 0b                	je     0x10029f19
10029f0e:	ff 74 3e 10          	push   DWORD PTR [esi+edi*1+0x10]
10029f12:	8b cb                	mov    ecx,ebx
10029f14:	e8 37 7b 0c 00       	call   0x100f1a50
10029f19:	83 bb dc 03 00 00 00 	cmp    DWORD PTR [ebx+0x3dc],0x0
10029f20:	74 36                	je     0x10029f58
10029f22:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10029f25:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10029f2b:	6a 00                	push   0x0
10029f2d:	ff 35 90 66 22 10    	push   DWORD PTR ds:0x10226690
10029f33:	6a 01                	push   0x1
10029f35:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
10029f3b:	6a 01                	push   0x1
10029f3d:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10029f43:	ff b3 dc 03 00 00    	push   DWORD PTR [ebx+0x3dc]
10029f49:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10029f4f:	83 c4 18             	add    esp,0x18
10029f52:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
10029f58:	83 bb e0 03 00 00 00 	cmp    DWORD PTR [ebx+0x3e0],0x0
10029f5f:	74 36                	je     0x10029f97
10029f61:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10029f64:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10029f6a:	6a 00                	push   0x0
10029f6c:	ff 35 90 66 22 10    	push   DWORD PTR ds:0x10226690
10029f72:	6a 01                	push   0x1
10029f74:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
10029f7a:	6a 02                	push   0x2
10029f7c:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10029f82:	ff b3 e0 03 00 00    	push   DWORD PTR [ebx+0x3e0]
10029f88:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10029f8e:	83 c4 18             	add    esp,0x18
10029f91:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
10029f97:	83 bb e4 03 00 00 00 	cmp    DWORD PTR [ebx+0x3e4],0x0
10029f9e:	74 36                	je     0x10029fd6
10029fa0:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10029fa3:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10029fa9:	6a 00                	push   0x0
10029fab:	ff 35 90 66 22 10    	push   DWORD PTR ds:0x10226690
10029fb1:	6a 01                	push   0x1
10029fb3:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
10029fb9:	6a 03                	push   0x3
10029fbb:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10029fc1:	ff b3 e4 03 00 00    	push   DWORD PTR [ebx+0x3e4]
10029fc7:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10029fcd:	83 c4 18             	add    esp,0x18
10029fd0:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
10029fd6:	68 1c 04 00 00       	push   0x41c
10029fdb:	8d 47 04             	lea    eax,[edi+0x4]
10029fde:	03 c6                	add    eax,esi
10029fe0:	6a 00                	push   0x0
10029fe2:	50                   	push   eax
10029fe3:	e8 a8 54 11 00       	call   0x1013f490
10029fe8:	83 c4 0c             	add    esp,0xc
10029feb:	b0 01                	mov    al,0x1
10029fed:	5f                   	pop    edi
10029fee:	5e                   	pop    esi
10029fef:	5b                   	pop    ebx
10029ff0:	8b e5                	mov    esp,ebp
10029ff2:	5d                   	pop    ebp
10029ff3:	c2 04 00             	ret    0x4
