
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100b0fd0 <.text+0xaffd0>:
100b0fd0:	55                   	push   ebp
100b0fd1:	8b ec                	mov    ebp,esp
100b0fd3:	83 e4 f8             	and    esp,0xfffffff8
100b0fd6:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100b0fd9:	83 ec 7c             	sub    esp,0x7c
100b0fdc:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100b0fdf:	53                   	push   ebx
100b0fe0:	56                   	push   esi
100b0fe1:	57                   	push   edi
100b0fe2:	8b f9                	mov    edi,ecx
100b0fe4:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100b0fe7:	8b 99 9c 01 00 00    	mov    ebx,DWORD PTR [ecx+0x19c]
100b0fed:	39 98 0c 02 00 00    	cmp    DWORD PTR [eax+0x20c],ebx
100b0ff3:	0f 84 59 03 00 00    	je     0x100b1352
100b0ff9:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100b0ffe:	8b f1                	mov    esi,ecx
100b1000:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100b1004:	0f 2f 87 08 03 00 00 	comiss xmm0,DWORD PTR [edi+0x308]
100b100b:	0f 86 88 01 00 00    	jbe    0x100b1199
100b1011:	f3 0f 10 49 24       	movss  xmm1,DWORD PTR [ecx+0x24]
100b1016:	f3 0f 10 51 20       	movss  xmm2,DWORD PTR [ecx+0x20]
100b101b:	f3 0f 10 41 28       	movss  xmm0,DWORD PTR [ecx+0x28]
100b1020:	f3 0f 59 d2          	mulss  xmm2,xmm2
100b1024:	f3 0f 59 c9          	mulss  xmm1,xmm1
100b1028:	f3 0f 59 c0          	mulss  xmm0,xmm0
100b102c:	f3 0f 58 d1          	addss  xmm2,xmm1
100b1030:	0f 57 c9             	xorps  xmm1,xmm1
100b1033:	f3 0f 58 d0          	addss  xmm2,xmm0
100b1037:	0f 5a c2             	cvtps2pd xmm0,xmm2
100b103a:	66 0f 2e c8          	ucomisd xmm1,xmm0
100b103e:	77 06                	ja     0x100b1046
100b1040:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100b1044:	eb 05                	jmp    0x100b104b
100b1046:	e8 45 ae 0b 00       	call   0x1016be90
100b104b:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100b104f:	0f 2f 05 1c 1f 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1f1c
100b1056:	0f 86 3d 01 00 00    	jbe    0x100b1199
100b105c:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
100b105f:	8d 83 80 00 00 00    	lea    eax,[ebx+0x80]
100b1065:	f7 db                	neg    ebx
100b1067:	1b db                	sbb    ebx,ebx
100b1069:	23 d8                	and    ebx,eax
100b106b:	0f 84 08 01 00 00    	je     0x100b1179
100b1071:	8d 44 24 50          	lea    eax,[esp+0x50]
100b1075:	50                   	push   eax
100b1076:	e8 85 7a 06 00       	call   0x10118b00
100b107b:	83 c4 04             	add    esp,0x4
100b107e:	0f 10 08             	movups xmm1,XMMWORD PTR [eax]
100b1081:	0f 10 50 10          	movups xmm2,XMMWORD PTR [eax+0x10]
100b1085:	0f 10 58 20          	movups xmm3,XMMWORD PTR [eax+0x20]
100b1089:	f3 0f 7e 40 30       	movq   xmm0,QWORD PTR [eax+0x30]
100b108e:	66 0f d6 84 24 80 00 	movq   QWORD PTR [esp+0x80],xmm0
100b1095:	00 00 
100b1097:	0f 28 c1             	movaps xmm0,xmm1
100b109a:	66 0f 73 d8 04       	psrldq xmm0,0x4
100b109f:	66 0f 7e 44 24 1c    	movd   DWORD PTR [esp+0x1c],xmm0
100b10a5:	0f 28 c1             	movaps xmm0,xmm1
100b10a8:	8b 84 24 80 00 00 00 	mov    eax,DWORD PTR [esp+0x80]
100b10af:	66 0f 73 d8 08       	psrldq xmm0,0x8
100b10b4:	66 0f 7e 44 24 20    	movd   DWORD PTR [esp+0x20],xmm0
100b10ba:	0f 28 c2             	movaps xmm0,xmm2
100b10bd:	0f c6 c2 55          	shufps xmm0,xmm2,0x55
100b10c1:	f3 0f 11 44 24 2c    	movss  DWORD PTR [esp+0x2c],xmm0
100b10c7:	0f 28 c2             	movaps xmm0,xmm2
100b10ca:	0f c6 c2 aa          	shufps xmm0,xmm2,0xaa
100b10ce:	f3 0f 11 44 24 30    	movss  DWORD PTR [esp+0x30],xmm0
100b10d4:	0f 28 c3             	movaps xmm0,xmm3
100b10d7:	0f c6 c3 55          	shufps xmm0,xmm3,0x55
100b10db:	f3 0f 11 44 24 3c    	movss  DWORD PTR [esp+0x3c],xmm0
100b10e1:	0f 28 c3             	movaps xmm0,xmm3
100b10e4:	0f c6 c3 aa          	shufps xmm0,xmm3,0xaa
100b10e8:	66 0f 7e 4c 24 18    	movd   DWORD PTR [esp+0x18],xmm1
100b10ee:	f3 0f 11 54 24 28    	movss  DWORD PTR [esp+0x28],xmm2
100b10f4:	f3 0f 11 5c 24 38    	movss  DWORD PTR [esp+0x38],xmm3
100b10fa:	66 0f 73 d9 0c       	psrldq xmm1,0xc
100b10ff:	0f c6 d2 ff          	shufps xmm2,xmm2,0xff
100b1103:	0f c6 db ff          	shufps xmm3,xmm3,0xff
100b1107:	89 44 24 48          	mov    DWORD PTR [esp+0x48],eax
100b110b:	8b 84 24 84 00 00 00 	mov    eax,DWORD PTR [esp+0x84]
100b1112:	66 0f 7e 4c 24 24    	movd   DWORD PTR [esp+0x24],xmm1
100b1118:	f3 0f 11 54 24 34    	movss  DWORD PTR [esp+0x34],xmm2
100b111e:	f3 0f 11 44 24 40    	movss  DWORD PTR [esp+0x40],xmm0
100b1124:	f3 0f 11 5c 24 44    	movss  DWORD PTR [esp+0x44],xmm3
100b112a:	89 44 24 4c          	mov    DWORD PTR [esp+0x4c],eax
100b112e:	e8 3d af 06 00       	call   0x1011c070
100b1133:	8b 35 88 31 22 10    	mov    esi,DWORD PTR ds:0x10223188
100b1139:	8d 44 24 18          	lea    eax,[esp+0x18]
100b113d:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100b1140:	68 80 00 00 00       	push   0x80
100b1145:	50                   	push   eax
100b1146:	8b 46 28             	mov    eax,DWORD PTR [esi+0x28]
100b1149:	83 ec 0c             	sub    esp,0xc
100b114c:	8b d4                	mov    edx,esp
100b114e:	51                   	push   ecx
100b114f:	89 02                	mov    DWORD PTR [edx],eax
100b1151:	8b 46 2c             	mov    eax,DWORD PTR [esi+0x2c]
100b1154:	89 42 04             	mov    DWORD PTR [edx+0x4],eax
100b1157:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
100b115a:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
100b115d:	8b 01                	mov    eax,DWORD PTR [ecx]
100b115f:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100b1166:	53                   	push   ebx
100b1167:	ff 50 60             	call   DWORD PTR [eax+0x60]
100b116a:	53                   	push   ebx
100b116b:	ff 77 04             	push   DWORD PTR [edi+0x4]
100b116e:	e8 7d a7 06 00       	call   0x1011b8f0
100b1173:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
100b1176:	83 c4 08             	add    esp,0x8
100b1179:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100b117e:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100b1182:	0f 5a c0             	cvtps2pd xmm0,xmm0
100b1185:	f2 0f 58 05 78 1e 1a 	addsd  xmm0,QWORD PTR ds:0x101a1e78
100b118c:	10 
100b118d:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100b1191:	f3 0f 11 87 08 03 00 	movss  DWORD PTR [edi+0x308],xmm0
100b1198:	00 
100b1199:	83 bf 68 03 00 00 00 	cmp    DWORD PTR [edi+0x368],0x0
100b11a0:	8b de                	mov    ebx,esi
100b11a2:	f3 0f 7e 46 20       	movq   xmm0,QWORD PTR [esi+0x20]
100b11a7:	8b 46 28             	mov    eax,DWORD PTR [esi+0x28]
100b11aa:	66 0f d6 44 24 0c    	movq   QWORD PTR [esp+0xc],xmm0
100b11b0:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
100b11b4:	f3 0f 10 44 24 14    	movss  xmm0,DWORD PTR [esp+0x14]
100b11ba:	0f 5a c0             	cvtps2pd xmm0,xmm0
100b11bd:	f2 0f 59 05 f0 93 1b 	mulsd  xmm0,QWORD PTR ds:0x101b93f0
100b11c4:	10 
100b11c5:	66 0f 5a d0          	cvtpd2ps xmm2,xmm0
100b11c9:	0f 85 86 00 00 00    	jne    0x100b1255
100b11cf:	f3 0f 10 4c 24 0c    	movss  xmm1,DWORD PTR [esp+0xc]
100b11d5:	f3 0f 10 44 24 10    	movss  xmm0,DWORD PTR [esp+0x10]
100b11db:	f3 0f 59 c9          	mulss  xmm1,xmm1
100b11df:	f3 0f 59 c0          	mulss  xmm0,xmm0
100b11e3:	f3 0f 59 d2          	mulss  xmm2,xmm2
100b11e7:	f3 0f 58 c8          	addss  xmm1,xmm0
100b11eb:	f3 0f 58 ca          	addss  xmm1,xmm2
100b11ef:	0f 5a c1             	cvtps2pd xmm0,xmm1
100b11f2:	0f 57 c9             	xorps  xmm1,xmm1
100b11f5:	66 0f 2e c8          	ucomisd xmm1,xmm0
100b11f9:	77 06                	ja     0x100b1201
100b11fb:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100b11ff:	eb 05                	jmp    0x100b1206
100b1201:	e8 8a ac 0b 00       	call   0x1016be90
100b1206:	0f 57 c9             	xorps  xmm1,xmm1
100b1209:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
100b120d:	f3 0f 10 05 00 1f 1a 	movss  xmm0,DWORD PTR ds:0x101a1f00
100b1214:	10 
100b1215:	0f 2f c1             	comiss xmm0,xmm1
100b1218:	72 3b                	jb     0x100b1255
100b121a:	f3 0f 10 86 e4 01 00 	movss  xmm0,DWORD PTR [esi+0x1e4]
100b1221:	00 
100b1222:	0f 5a c0             	cvtps2pd xmm0,xmm0
100b1225:	51                   	push   ecx
100b1226:	c7 04 24 9a 99 99 3e 	mov    DWORD PTR [esp],0x3e99999a
100b122d:	f2 0f 5e 05 30 1e 1a 	divsd  xmm0,QWORD PTR ds:0x101a1e30
100b1234:	10 
100b1235:	f2 0f 2c c0          	cvttsd2si eax,xmm0
100b1239:	50                   	push   eax
100b123a:	8d 46 08             	lea    eax,[esi+0x8]
100b123d:	50                   	push   eax
100b123e:	6a 20                	push   0x20
100b1240:	e8 db f5 04 00       	call   0x10100820
100b1245:	8b 5f 04             	mov    ebx,DWORD PTR [edi+0x4]
100b1248:	83 c4 10             	add    esp,0x10
100b124b:	c7 87 68 03 00 00 01 	mov    DWORD PTR [edi+0x368],0x1
100b1252:	00 00 00 
100b1255:	f7 83 a8 01 00 00 00 	test   DWORD PTR [ebx+0x1a8],0x200
100b125c:	02 00 00 
100b125f:	74 50                	je     0x100b12b1
100b1261:	f3 0f 10 5b 20       	movss  xmm3,DWORD PTR [ebx+0x20]
100b1266:	f3 0f 10 0d 7c e0 1a 	movss  xmm1,DWORD PTR ds:0x101ae07c
100b126d:	10 
100b126e:	f3 0f 10 53 24       	movss  xmm2,DWORD PTR [ebx+0x24]
100b1273:	f3 0f 10 43 28       	movss  xmm0,DWORD PTR [ebx+0x28]
100b1278:	f3 0f 59 d9          	mulss  xmm3,xmm1
100b127c:	6a 01                	push   0x1
100b127e:	f3 0f 59 d1          	mulss  xmm2,xmm1
100b1282:	6a 01                	push   0x1
100b1284:	f3 0f 59 c1          	mulss  xmm0,xmm1
100b1288:	0f 14 da             	unpcklps xmm3,xmm2
100b128b:	66 0f d6 5b 20       	movq   QWORD PTR [ebx+0x20],xmm3
100b1290:	f3 0f 11 44 24 1c    	movss  DWORD PTR [esp+0x1c],xmm0
100b1296:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
100b129a:	89 43 28             	mov    DWORD PTR [ebx+0x28],eax
100b129d:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100b12a3:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100b12a6:	83 c4 08             	add    esp,0x8
100b12a9:	89 81 2c 01 00 00    	mov    DWORD PTR [ecx+0x12c],eax
100b12af:	eb 0a                	jmp    0x100b12bb
100b12b1:	8b 07                	mov    eax,DWORD PTR [edi]
100b12b3:	8b cf                	mov    ecx,edi
100b12b5:	ff 90 44 02 00 00    	call   DWORD PTR [eax+0x244]
100b12bb:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
100b12be:	f3 0f 10 4e 24       	movss  xmm1,DWORD PTR [esi+0x24]
100b12c3:	f3 0f 10 56 20       	movss  xmm2,DWORD PTR [esi+0x20]
100b12c8:	f3 0f 10 46 28       	movss  xmm0,DWORD PTR [esi+0x28]
100b12cd:	f3 0f 59 d2          	mulss  xmm2,xmm2
100b12d1:	f3 0f 59 c9          	mulss  xmm1,xmm1
100b12d5:	f3 0f 59 c0          	mulss  xmm0,xmm0
100b12d9:	f3 0f 58 d1          	addss  xmm2,xmm1
100b12dd:	0f 57 c9             	xorps  xmm1,xmm1
100b12e0:	f3 0f 58 d0          	addss  xmm2,xmm0
100b12e4:	0f 5a c2             	cvtps2pd xmm0,xmm2
100b12e7:	66 0f 2e c8          	ucomisd xmm1,xmm0
100b12eb:	77 06                	ja     0x100b12f3
100b12ed:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100b12f1:	eb 05                	jmp    0x100b12f8
100b12f3:	e8 98 ab 0b 00       	call   0x1016be90
100b12f8:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100b12fc:	f3 0f 5a c0          	cvtss2sd xmm0,xmm0
100b1300:	f2 0f 5e 05 88 eb 1c 	divsd  xmm0,QWORD PTR ds:0x101ceb88
100b1307:	10 
100b1308:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100b130c:	f3 0f 11 86 3c 01 00 	movss  DWORD PTR [esi+0x13c],xmm0
100b1313:	00 
100b1314:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100b1317:	f3 0f 10 88 3c 01 00 	movss  xmm1,DWORD PTR [eax+0x13c]
100b131e:	00 
100b131f:	0f 2f 0d 90 13 1a 10 	comiss xmm1,DWORD PTR ds:0x101a1390
100b1326:	76 13                	jbe    0x100b133b
100b1328:	c7 80 3c 01 00 00 00 	mov    DWORD PTR [eax+0x13c],0x3f800000
100b132f:	00 80 3f 
100b1332:	5f                   	pop    edi
100b1333:	5e                   	pop    esi
100b1334:	5b                   	pop    ebx
100b1335:	8b e5                	mov    esp,ebp
100b1337:	5d                   	pop    ebp
100b1338:	c2 04 00             	ret    0x4
100b133b:	f3 0f 10 05 d8 1d 1a 	movss  xmm0,DWORD PTR ds:0x101a1dd8
100b1342:	10 
100b1343:	0f 2f c1             	comiss xmm0,xmm1
100b1346:	76 0a                	jbe    0x100b1352
100b1348:	c7 80 3c 01 00 00 00 	mov    DWORD PTR [eax+0x13c],0x0
100b134f:	00 00 00 
100b1352:	5f                   	pop    edi
100b1353:	5e                   	pop    esi
100b1354:	5b                   	pop    ebx
100b1355:	8b e5                	mov    esp,ebp
100b1357:	5d                   	pop    ebp
100b1358:	c2 04 00             	ret    0x4
