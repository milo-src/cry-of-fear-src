
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10046dc0 <.text+0x45dc0>:
10046dc0:	55                   	push   ebp
10046dc1:	8b ec                	mov    ebp,esp
10046dc3:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10046dc8:	83 ec 58             	sub    esp,0x58
10046dcb:	56                   	push   esi
10046dcc:	57                   	push   edi
10046dcd:	8b f9                	mov    edi,ecx
10046dcf:	f3 0f 10 87 cc 01 00 	movss  xmm0,DWORD PTR [edi+0x1cc]
10046dd6:	00 
10046dd7:	0f 2f 00             	comiss xmm0,DWORD PTR [eax]
10046dda:	0f 87 c1 07 00 00    	ja     0x100475a1
10046de0:	83 bf 28 01 00 00 00 	cmp    DWORD PTR [edi+0x128],0x0
10046de7:	0f 85 b4 07 00 00    	jne    0x100475a1
10046ded:	83 bf 40 01 00 00 00 	cmp    DWORD PTR [edi+0x140],0x0
10046df4:	0f 85 a7 07 00 00    	jne    0x100475a1
10046dfa:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
10046e00:	f6 80 b0 22 00 00 01 	test   BYTE PTR [eax+0x22b0],0x1
10046e07:	0f 84 94 07 00 00    	je     0x100475a1
10046e0d:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10046e10:	83 b8 c4 01 00 00 03 	cmp    DWORD PTR [eax+0x1c4],0x3
10046e17:	0f 85 a3 00 00 00    	jne    0x10046ec0
10046e1d:	80 bf 78 01 00 00 00 	cmp    BYTE PTR [edi+0x178],0x0
10046e24:	8b 07                	mov    eax,DWORD PTR [edi]
10046e26:	6a 00                	push   0x0
10046e28:	6a 01                	push   0x1
10046e2a:	8b 80 98 01 00 00    	mov    eax,DWORD PTR [eax+0x198]
10046e30:	74 04                	je     0x10046e36
10046e32:	6a 23                	push   0x23
10046e34:	eb 02                	jmp    0x10046e38
10046e36:	6a 14                	push   0x14
10046e38:	ff d0                	call   eax
10046e3a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10046e3f:	f2 0f 10 0d 48 1e 1a 	movsd  xmm1,QWORD PTR ds:0x101a1e48
10046e46:	10 
10046e47:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10046e4b:	0f 2f 87 b0 01 00 00 	comiss xmm0,DWORD PTR [edi+0x1b0]
10046e52:	76 33                	jbe    0x10046e87
10046e54:	8b 07                	mov    eax,DWORD PTR [edi]
10046e56:	8b cf                	mov    ecx,edi
10046e58:	ff 90 90 01 00 00    	call   DWORD PTR [eax+0x190]
10046e5e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10046e63:	f2 0f 10 0d 48 1e 1a 	movsd  xmm1,QWORD PTR ds:0x101a1e48
10046e6a:	10 
10046e6b:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10046e6f:	0f 5a c0             	cvtps2pd xmm0,xmm0
10046e72:	f2 0f 58 c1          	addsd  xmm0,xmm1
10046e76:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10046e7a:	f3 0f 11 87 b0 01 00 	movss  DWORD PTR [edi+0x1b0],xmm0
10046e81:	00 
10046e82:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10046e87:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10046e8b:	0f 5a c0             	cvtps2pd xmm0,xmm0
10046e8e:	f2 0f 58 c1          	addsd  xmm0,xmm1
10046e92:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10046e96:	f3 0f 11 87 cc 01 00 	movss  DWORD PTR [edi+0x1cc],xmm0
10046e9d:	00 
10046e9e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10046ea3:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10046ea7:	0f 5a c0             	cvtps2pd xmm0,xmm0
10046eaa:	f2 0f 58 c1          	addsd  xmm0,xmm1
10046eae:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10046eb2:	f3 0f 11 87 d0 01 00 	movss  DWORD PTR [edi+0x1d0],xmm0
10046eb9:	00 
10046eba:	5f                   	pop    edi
10046ebb:	5e                   	pop    esi
10046ebc:	8b e5                	mov    esp,ebp
10046ebe:	5d                   	pop    ebp
10046ebf:	c3                   	ret
10046ec0:	83 bf e4 01 00 00 00 	cmp    DWORD PTR [edi+0x1e4],0x0
10046ec7:	0f 8f b7 00 00 00    	jg     0x10046f84
10046ecd:	83 bf b8 01 00 00 00 	cmp    DWORD PTR [edi+0x1b8],0x0
10046ed4:	8b 07                	mov    eax,DWORD PTR [edi]
10046ed6:	75 4c                	jne    0x10046f24
10046ed8:	ff 90 c0 01 00 00    	call   DWORD PTR [eax+0x1c0]
10046ede:	f2 0f 10 0d 48 1e 1a 	movsd  xmm1,QWORD PTR ds:0x101a1e48
10046ee5:	10 
10046ee6:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10046eeb:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10046eef:	0f 5a c0             	cvtps2pd xmm0,xmm0
10046ef2:	f2 0f 58 c1          	addsd  xmm0,xmm1
10046ef6:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10046efa:	f3 0f 11 87 cc 01 00 	movss  DWORD PTR [edi+0x1cc],xmm0
10046f01:	00 
10046f02:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10046f07:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10046f0b:	0f 5a c0             	cvtps2pd xmm0,xmm0
10046f0e:	f2 0f 58 c1          	addsd  xmm0,xmm1
10046f12:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10046f16:	f3 0f 11 87 d0 01 00 	movss  DWORD PTR [edi+0x1d0],xmm0
10046f1d:	00 
10046f1e:	5f                   	pop    edi
10046f1f:	5e                   	pop    esi
10046f20:	8b e5                	mov    esp,ebp
10046f22:	5d                   	pop    ebp
10046f23:	c3                   	ret
10046f24:	80 bf 78 01 00 00 00 	cmp    BYTE PTR [edi+0x178],0x0
10046f2b:	8b 80 98 01 00 00    	mov    eax,DWORD PTR [eax+0x198]
10046f31:	6a 00                	push   0x0
10046f33:	6a 01                	push   0x1
10046f35:	74 04                	je     0x10046f3b
10046f37:	6a 23                	push   0x23
10046f39:	eb 02                	jmp    0x10046f3d
10046f3b:	6a 14                	push   0x14
10046f3d:	ff d0                	call   eax
10046f3f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10046f44:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10046f48:	0f 2f 87 b0 01 00 00 	comiss xmm0,DWORD PTR [edi+0x1b0]
10046f4f:	76 8d                	jbe    0x10046ede
10046f51:	8b 07                	mov    eax,DWORD PTR [edi]
10046f53:	8b cf                	mov    ecx,edi
10046f55:	ff 90 90 01 00 00    	call   DWORD PTR [eax+0x190]
10046f5b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10046f60:	f2 0f 10 0d 48 1e 1a 	movsd  xmm1,QWORD PTR ds:0x101a1e48
10046f67:	10 
10046f68:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10046f6c:	0f 5a c0             	cvtps2pd xmm0,xmm0
10046f6f:	f2 0f 58 c1          	addsd  xmm0,xmm1
10046f73:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10046f77:	f3 0f 11 87 b0 01 00 	movss  DWORD PTR [edi+0x1b0],xmm0
10046f7e:	00 
10046f7f:	e9 62 ff ff ff       	jmp    0x10046ee6
10046f84:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10046f8a:	6a 00                	push   0x0
10046f8c:	ff 35 90 64 22 10    	push   DWORD PTR ds:0x10226490
10046f92:	6a 01                	push   0x1
10046f94:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
10046f9a:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10046f9d:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10046fa3:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
10046fa9:	50                   	push   eax
10046faa:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
10046fb0:	68 e4 b5 1a 10       	push   0x101ab5e4
10046fb5:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
10046fbb:	6a 01                	push   0x1
10046fbd:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10046fc3:	68 20 dd 1a 10       	push   0x101add20
10046fc8:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
10046fce:	6a 00                	push   0x0
10046fd0:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
10046fd6:	83 c4 28             	add    esp,0x28
10046fd9:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
10046fdf:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
10046fe5:	80 b8 ea 21 00 00 00 	cmp    BYTE PTR [eax+0x21ea],0x0
10046fec:	75 06                	jne    0x10046ff4
10046fee:	ff 8f e4 01 00 00    	dec    DWORD PTR [edi+0x1e4]
10046ff4:	8b b0 14 28 00 00    	mov    esi,DWORD PTR [eax+0x2814]
10046ffa:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10046ffd:	83 c0 74             	add    eax,0x74
10047000:	50                   	push   eax
10047001:	e8 1a 23 0d 00       	call   0x10119320
10047006:	8b 8f 60 01 00 00    	mov    ecx,DWORD PTR [edi+0x160]
1004700c:	8d 55 e4             	lea    edx,[ebp-0x1c]
1004700f:	83 c4 04             	add    esp,0x4
10047012:	8b 01                	mov    eax,DWORD PTR [ecx]
10047014:	52                   	push   edx
10047015:	ff 90 28 02 00 00    	call   DWORD PTR [eax+0x228]
1004701b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10047020:	f3 0f 10 05 28 97 1a 	movss  xmm0,DWORD PTR ds:0x101a9728
10047027:	10 
10047028:	f3 0f 10 65 e4       	movss  xmm4,DWORD PTR [ebp-0x1c]
1004702d:	6a 00                	push   0x0
1004702f:	f3 0f 10 48 40       	movss  xmm1,DWORD PTR [eax+0x40]
10047034:	f3 0f 10 50 44       	movss  xmm2,DWORD PTR [eax+0x44]
10047039:	f3 0f 10 58 48       	movss  xmm3,DWORD PTR [eax+0x48]
1004703e:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
10047044:	f3 0f 59 c8          	mulss  xmm1,xmm0
10047048:	6a 00                	push   0x0
1004704a:	f3 0f 59 d0          	mulss  xmm2,xmm0
1004704e:	6a 00                	push   0x0
10047050:	ff b7 68 01 00 00    	push   DWORD PTR [edi+0x168]
10047056:	f3 0f 59 d8          	mulss  xmm3,xmm0
1004705a:	f3 0f 58 e1          	addss  xmm4,xmm1
1004705e:	83 ec 08             	sub    esp,0x8
10047061:	f3 0f 10 4d e8       	movss  xmm1,DWORD PTR [ebp-0x18]
10047066:	f3 0f 10 45 ec       	movss  xmm0,DWORD PTR [ebp-0x14]
1004706b:	f3 0f 58 ca          	addss  xmm1,xmm2
1004706f:	f3 0f 58 c3          	addss  xmm0,xmm3
10047073:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x0
1004707a:	00 
1004707b:	f3 0f 11 65 d8       	movss  DWORD PTR [ebp-0x28],xmm4
10047080:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
10047087:	f3 0f 11 4d dc       	movss  DWORD PTR [ebp-0x24],xmm1
1004708c:	f3 0f 11 45 e0       	movss  DWORD PTR [ebp-0x20],xmm0
10047091:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
10047094:	8d 45 d8             	lea    eax,[ebp-0x28]
10047097:	50                   	push   eax
10047098:	8d 41 08             	lea    eax,[ecx+0x8]
1004709b:	50                   	push   eax
1004709c:	0f b7 05 50 1f 23 10 	movzx  eax,WORD PTR ds:0x10231f50
100470a3:	51                   	push   ecx
100470a4:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100470ab:	50                   	push   eax
100470ac:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
100470b2:	33 c0                	xor    eax,eax
100470b4:	83 fe 01             	cmp    esi,0x1
100470b7:	0f 95 c0             	setne  al
100470ba:	50                   	push   eax
100470bb:	ff 15 34 31 22 10    	call   DWORD PTR ds:0x10223134
100470c1:	8b 8f 60 01 00 00    	mov    ecx,DWORD PTR [edi+0x160]
100470c7:	83 c4 30             	add    esp,0x30
100470ca:	6a 00                	push   0x0
100470cc:	68 54 08 1b 10       	push   0x101b0854
100470d1:	e8 6a 31 0a 00       	call   0x100ea240
100470d6:	8b 8f 60 01 00 00    	mov    ecx,DWORD PTR [edi+0x160]
100470dc:	6a 05                	push   0x5
100470de:	e8 6d b9 0a 00       	call   0x100f2a50
100470e3:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
100470e9:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100470ec:	83 88 18 01 00 00 02 	or     DWORD PTR [eax+0x118],0x2
100470f3:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
100470f9:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100470fc:	f3 0f 10 50 74       	movss  xmm2,DWORD PTR [eax+0x74]
10047101:	f3 0f 10 48 6c       	movss  xmm1,DWORD PTR [eax+0x6c]
10047106:	f3 0f 10 40 70       	movss  xmm0,DWORD PTR [eax+0x70]
1004710b:	f3 0f 58 50 68       	addss  xmm2,DWORD PTR [eax+0x68]
10047110:	f3 0f 58 48 78       	addss  xmm1,DWORD PTR [eax+0x78]
10047115:	f3 0f 58 40 7c       	addss  xmm0,DWORD PTR [eax+0x7c]
1004711a:	8d 45 cc             	lea    eax,[ebp-0x34]
1004711d:	50                   	push   eax
1004711e:	f3 0f 11 55 cc       	movss  DWORD PTR [ebp-0x34],xmm2
10047123:	f3 0f 11 4d d0       	movss  DWORD PTR [ebp-0x30],xmm1
10047128:	f3 0f 11 45 d4       	movss  DWORD PTR [ebp-0x2c],xmm0
1004712d:	e8 ee 21 0d 00       	call   0x10119320
10047132:	8b 8f 60 01 00 00    	mov    ecx,DWORD PTR [edi+0x160]
10047138:	8d 55 b4             	lea    edx,[ebp-0x4c]
1004713b:	83 c4 04             	add    esp,0x4
1004713e:	8b 01                	mov    eax,DWORD PTR [ecx]
10047140:	52                   	push   edx
10047141:	ff 90 28 02 00 00    	call   DWORD PTR [eax+0x228]
10047147:	51                   	push   ecx
10047148:	8b 8f 60 01 00 00    	mov    ecx,DWORD PTR [edi+0x160]
1004714e:	8d 45 c0             	lea    eax,[ebp-0x40]
10047151:	c7 04 24 d4 d0 31 3e 	mov    DWORD PTR [esp],0x3e31d0d4
10047158:	50                   	push   eax
10047159:	e8 42 8d 09 00       	call   0x100dfea0
1004715e:	f3 0f 10 87 98 01 00 	movss  xmm0,DWORD PTR [edi+0x198]
10047165:	00 
10047166:	f3 0f 58 87 9c 01 00 	addss  xmm0,DWORD PTR [edi+0x19c]
1004716d:	00 
1004716e:	f3 0f 11 87 9c 01 00 	movss  DWORD PTR [edi+0x19c],xmm0
10047175:	00 
10047176:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004717b:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1004717f:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
10047185:	0f 5a c0             	cvtps2pd xmm0,xmm0
10047188:	f2 0f 58 05 10 0a 1b 	addsd  xmm0,QWORD PTR ds:0x101b0a10
1004718f:	10 
10047190:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10047194:	f3 0f 11 87 a0 01 00 	movss  DWORD PTR [edi+0x1a0],xmm0
1004719b:	00 
1004719c:	ff b0 88 22 00 00    	push   DWORD PTR [eax+0x2288]
100471a2:	ff 70 04             	push   DWORD PTR [eax+0x4]
100471a5:	f3 0f 2c 05 50 68 22 	cvttss2si eax,DWORD PTR ds:0x10226850
100471ac:	10 
100471ad:	50                   	push   eax
100471ae:	8b 87 8c 01 00 00    	mov    eax,DWORD PTR [edi+0x18c]
100471b4:	6a 02                	push   0x2
100471b6:	6a 03                	push   0x3
100471b8:	83 ec 10             	sub    esp,0x10
100471bb:	8b cc                	mov    ecx,esp
100471bd:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x46000000
100471c4:	46 
100471c5:	83 ec 0c             	sub    esp,0xc
100471c8:	89 01                	mov    DWORD PTR [ecx],eax
100471ca:	8b 87 90 01 00 00    	mov    eax,DWORD PTR [edi+0x190]
100471d0:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
100471d3:	8b 87 94 01 00 00    	mov    eax,DWORD PTR [edi+0x194]
100471d9:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
100471dc:	8b c4                	mov    eax,esp
100471de:	f3 0f 10 45 c0       	movss  xmm0,DWORD PTR [ebp-0x40]
100471e3:	83 ec 0c             	sub    esp,0xc
100471e6:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
100471ea:	f3 0f 10 45 c4       	movss  xmm0,DWORD PTR [ebp-0x3c]
100471ef:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
100471f4:	f3 0f 10 45 c8       	movss  xmm0,DWORD PTR [ebp-0x38]
100471f9:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
100471fe:	8b c4                	mov    eax,esp
10047200:	f3 0f 10 45 b4       	movss  xmm0,DWORD PTR [ebp-0x4c]
10047205:	6a 01                	push   0x1
10047207:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
1004720b:	f3 0f 10 45 b8       	movss  xmm0,DWORD PTR [ebp-0x48]
10047210:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
10047215:	f3 0f 10 45 bc       	movss  xmm0,DWORD PTR [ebp-0x44]
1004721a:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
1004721f:	8d 45 a8             	lea    eax,[ebp-0x58]
10047222:	8b 8f 60 01 00 00    	mov    ecx,DWORD PTR [edi+0x160]
10047228:	50                   	push   eax
10047229:	e8 72 1a 04 00       	call   0x10088ca0
1004722e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10047233:	83 ec 08             	sub    esp,0x8
10047236:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1004723a:	f3 0f 58 05 90 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1390
10047241:	10 
10047242:	c7 44 24 04 00 00 80 	mov    DWORD PTR [esp+0x4],0x3f800000
10047249:	3f 
1004724a:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10047251:	6a 02                	push   0x2
10047253:	6a fe                	push   0xfffffffe
10047255:	f3 0f 11 87 d8 01 00 	movss  DWORD PTR [edi+0x1d8],xmm0
1004725c:	00 
1004725d:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
10047263:	8b 8f 60 01 00 00    	mov    ecx,DWORD PTR [edi+0x160]
10047269:	83 c4 04             	add    esp,0x4
1004726c:	66 0f 6e c0          	movd   xmm0,eax
10047270:	0f 5b c0             	cvtdq2ps xmm0,xmm0
10047273:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10047278:	e8 33 1f 0b 00       	call   0x100f91b0
1004727d:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
10047283:	85 c9                	test   ecx,ecx
10047285:	0f 84 ab 01 00 00    	je     0x10047436
1004728b:	8b 01                	mov    eax,DWORD PTR [ecx]
1004728d:	ff 50 20             	call   DWORD PTR [eax+0x20]
10047290:	85 c0                	test   eax,eax
10047292:	0f 85 9e 01 00 00    	jne    0x10047436
10047298:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
1004729e:	f3 0f 10 25 28 1f 1a 	movss  xmm4,DWORD PTR ds:0x101a1f28
100472a5:	10 
100472a6:	f3 0f 10 15 74 b6 1a 	movss  xmm2,DWORD PTR ds:0x101ab674
100472ad:	10 
100472ae:	f3 0f 10 1d 70 b6 1a 	movss  xmm3,DWORD PTR ds:0x101ab670
100472b5:	10 
100472b6:	f3 0f 10 41 2c       	movss  xmm0,DWORD PTR [ecx+0x2c]
100472bb:	f3 0f 10 49 34       	movss  xmm1,DWORD PTR [ecx+0x34]
100472c0:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
100472c5:	f3 0f 10 41 30       	movss  xmm0,DWORD PTR [ecx+0x30]
100472ca:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
100472cf:	f3 0f 10 41 3c       	movss  xmm0,DWORD PTR [ecx+0x3c]
100472d4:	f3 0f 10 71 38       	movss  xmm6,DWORD PTR [ecx+0x38]
100472d9:	f3 0f 10 69 44       	movss  xmm5,DWORD PTR [ecx+0x44]
100472de:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
100472e3:	f3 0f 10 41 40       	movss  xmm0,DWORD PTR [ecx+0x40]
100472e8:	f3 0f 59 c2          	mulss  xmm0,xmm2
100472ec:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100472ef:	f3 0f 10 79 48       	movss  xmm7,DWORD PTR [ecx+0x48]
100472f4:	f3 0f 59 cc          	mulss  xmm1,xmm4
100472f8:	6a 01                	push   0x1
100472fa:	f3 0f 59 f4          	mulss  xmm6,xmm4
100472fe:	f3 0f 58 c8          	addss  xmm1,xmm0
10047302:	f3 0f 59 ea          	mulss  xmm5,xmm2
10047306:	f3 0f 10 41 28       	movss  xmm0,DWORD PTR [ecx+0x28]
1004730b:	f3 0f 59 c3          	mulss  xmm0,xmm3
1004730f:	f3 0f 58 ee          	addss  xmm5,xmm6
10047313:	f3 0f 59 fa          	mulss  xmm7,xmm2
10047317:	f3 0f 58 c8          	addss  xmm1,xmm0
1004731b:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
10047320:	f3 0f 59 c3          	mulss  xmm0,xmm3
10047324:	ff b7 fc 01 00 00    	push   DWORD PTR [edi+0x1fc]
1004732a:	f3 0f 58 e8          	addss  xmm5,xmm0
1004732e:	f3 0f 11 4d cc       	movss  DWORD PTR [ebp-0x34],xmm1
10047333:	f3 0f 10 45 f8       	movss  xmm0,DWORD PTR [ebp-0x8]
10047338:	f3 0f 59 c4          	mulss  xmm0,xmm4
1004733c:	51                   	push   ecx
1004733d:	f3 0f 10 25 14 1f 1a 	movss  xmm4,DWORD PTR ds:0x101a1f14
10047344:	10 
10047345:	f3 0f 11 6d d0       	movss  DWORD PTR [ebp-0x30],xmm5
1004734a:	f3 0f 58 f8          	addss  xmm7,xmm0
1004734e:	f3 0f 10 45 f4       	movss  xmm0,DWORD PTR [ebp-0xc]
10047353:	f3 0f 59 c3          	mulss  xmm0,xmm3
10047357:	f3 0f 10 1d ec 1e 1a 	movss  xmm3,DWORD PTR ds:0x101a1eec
1004735e:	10 
1004735f:	f3 0f 58 f8          	addss  xmm7,xmm0
10047363:	f3 0f 11 7d d4       	movss  DWORD PTR [ebp-0x2c],xmm7
10047368:	f3 0f 10 41 44       	movss  xmm0,DWORD PTR [ecx+0x44]
1004736d:	f3 0f 10 88 78 01 00 	movss  xmm1,DWORD PTR [eax+0x178]
10047374:	00 
10047375:	f3 0f 58 48 08       	addss  xmm1,DWORD PTR [eax+0x8]
1004737a:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
1004737f:	f3 0f 10 41 48       	movss  xmm0,DWORD PTR [ecx+0x48]
10047384:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
10047389:	f3 0f 10 41 2c       	movss  xmm0,DWORD PTR [ecx+0x2c]
1004738e:	f3 0f 10 b0 7c 01 00 	movss  xmm6,DWORD PTR [eax+0x17c]
10047395:	00 
10047396:	f3 0f 10 50 0c       	movss  xmm2,DWORD PTR [eax+0xc]
1004739b:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
100473a0:	f3 0f 58 f2          	addss  xmm6,xmm2
100473a4:	f3 0f 10 41 30       	movss  xmm0,DWORD PTR [ecx+0x30]
100473a9:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
100473ae:	f3 0f 10 41 28       	movss  xmm0,DWORD PTR [ecx+0x28]
100473b3:	f3 0f 59 c4          	mulss  xmm0,xmm4
100473b7:	f3 0f 10 a8 80 01 00 	movss  xmm5,DWORD PTR [eax+0x180]
100473be:	00 
100473bf:	f3 0f 10 78 10       	movss  xmm7,DWORD PTR [eax+0x10]
100473c4:	f3 0f 58 c8          	addss  xmm1,xmm0
100473c8:	f3 0f 10 41 40       	movss  xmm0,DWORD PTR [ecx+0x40]
100473cd:	f3 0f 59 c3          	mulss  xmm0,xmm3
100473d1:	f3 0f 58 fd          	addss  xmm7,xmm5
100473d5:	f3 0f 58 c8          	addss  xmm1,xmm0
100473d9:	f3 0f 10 45 f4       	movss  xmm0,DWORD PTR [ebp-0xc]
100473de:	f3 0f 59 c4          	mulss  xmm0,xmm4
100473e2:	f3 0f 58 f0          	addss  xmm6,xmm0
100473e6:	f3 0f 11 4d a8       	movss  DWORD PTR [ebp-0x58],xmm1
100473eb:	f3 0f 10 45 f8       	movss  xmm0,DWORD PTR [ebp-0x8]
100473f0:	f3 0f 59 c3          	mulss  xmm0,xmm3
100473f4:	f3 0f 58 f0          	addss  xmm6,xmm0
100473f8:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
100473fd:	f3 0f 59 c4          	mulss  xmm0,xmm4
10047401:	f3 0f 58 f8          	addss  xmm7,xmm0
10047405:	f3 0f 11 75 ac       	movss  DWORD PTR [ebp-0x54],xmm6
1004740a:	f3 0f 10 45 f0       	movss  xmm0,DWORD PTR [ebp-0x10]
1004740f:	f3 0f 59 c3          	mulss  xmm0,xmm3
10047413:	f3 0f 58 f8          	addss  xmm7,xmm0
10047417:	f3 0f 11 7d b0       	movss  DWORD PTR [ebp-0x50],xmm7
1004741c:	f3 0f 10 40 54       	movss  xmm0,DWORD PTR [eax+0x54]
10047421:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10047426:	8d 45 cc             	lea    eax,[ebp-0x34]
10047429:	50                   	push   eax
1004742a:	8d 45 a8             	lea    eax,[ebp-0x58]
1004742d:	50                   	push   eax
1004742e:	e8 3d 5b 0d 00       	call   0x1011cf70
10047433:	83 c4 14             	add    esp,0x14
10047436:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
1004743c:	f3 0f 10 0d 80 13 1a 	movss  xmm1,DWORD PTR ds:0x101a1380
10047443:	10 
10047444:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10047447:	f7 80 a8 01 00 00 00 	test   DWORD PTR [eax+0x1a8],0x4000
1004744e:	40 00 00 
10047451:	74 0d                	je     0x10047460
10047453:	f3 0f 10 05 cc 1d 1a 	movss  xmm0,DWORD PTR ds:0x101a1dcc
1004745a:	10 
1004745b:	0f 28 d0             	movaps xmm2,xmm0
1004745e:	eb 18                	jmp    0x10047478
10047460:	f3 0f 10 0d 24 97 1a 	movss  xmm1,DWORD PTR ds:0x101a9724
10047467:	10 
10047468:	f3 0f 10 05 74 e0 1a 	movss  xmm0,DWORD PTR ds:0x101ae074
1004746f:	10 
10047470:	f3 0f 10 15 6c e0 1a 	movss  xmm2,DWORD PTR ds:0x101ae06c
10047477:	10 
10047478:	83 ec 10             	sub    esp,0x10
1004747b:	83 c0 08             	add    eax,0x8
1004747e:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x40000000
10047485:	40 
10047486:	f3 0f 11 54 24 08    	movss  DWORD PTR [esp+0x8],xmm2
1004748c:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
10047492:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
10047497:	50                   	push   eax
10047498:	e8 43 29 0d 00       	call   0x10119de0
1004749d:	8b 07                	mov    eax,DWORD PTR [edi]
1004749f:	83 c4 14             	add    esp,0x14
100474a2:	80 bf 78 01 00 00 00 	cmp    BYTE PTR [edi+0x178],0x0
100474a9:	8b 8f e4 01 00 00    	mov    ecx,DWORD PTR [edi+0x1e4]
100474af:	8b 80 98 01 00 00    	mov    eax,DWORD PTR [eax+0x198]
100474b5:	6a 00                	push   0x0
100474b7:	6a 01                	push   0x1
100474b9:	74 0e                	je     0x100474c9
100474bb:	85 c9                	test   ecx,ecx
100474bd:	8b cf                	mov    ecx,edi
100474bf:	75 04                	jne    0x100474c5
100474c1:	6a 26                	push   0x26
100474c3:	eb 10                	jmp    0x100474d5
100474c5:	6a 22                	push   0x22
100474c7:	eb 0c                	jmp    0x100474d5
100474c9:	85 c9                	test   ecx,ecx
100474cb:	8b cf                	mov    ecx,edi
100474cd:	75 04                	jne    0x100474d3
100474cf:	6a 03                	push   0x3
100474d1:	eb 02                	jmp    0x100474d5
100474d3:	6a 02                	push   0x2
100474d5:	ff d0                	call   eax
100474d7:	51                   	push   ecx
100474d8:	8b 8f 60 01 00 00    	mov    ecx,DWORD PTR [edi+0x160]
100474de:	c7 04 24 00 00 40 40 	mov    DWORD PTR [esp],0x40400000
100474e5:	e8 16 1c 0b 00       	call   0x100f9100
100474ea:	8b 8f 60 01 00 00    	mov    ecx,DWORD PTR [edi+0x160]
100474f0:	6a 01                	push   0x1
100474f2:	51                   	push   ecx
100474f3:	83 ec 0c             	sub    esp,0xc
100474f6:	8b 01                	mov    eax,DWORD PTR [ecx]
100474f8:	54                   	push   esp
100474f9:	ff 90 04 01 00 00    	call   DWORD PTR [eax+0x104]
100474ff:	6a 01                	push   0x1
10047501:	6a 00                	push   0x0
10047503:	68 f4 de 1a 10       	push   0x101adef4
10047508:	e8 33 f5 0c 00       	call   0x10116a40
1004750d:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
10047513:	83 c4 20             	add    esp,0x20
10047516:	f3 0f 10 0d 90 13 1a 	movss  xmm1,DWORD PTR ds:0x101a1390
1004751d:	10 
1004751e:	c7 80 98 22 00 00 01 	mov    DWORD PTR [eax+0x2298],0x1
10047525:	00 00 00 
10047528:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004752d:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10047531:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
10047537:	0f 5a c0             	cvtps2pd xmm0,xmm0
1004753a:	f2 0f 58 05 10 1e 1a 	addsd  xmm0,QWORD PTR ds:0x101a1e10
10047541:	10 
10047542:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10047546:	f3 0f 11 80 a0 22 00 	movss  DWORD PTR [eax+0x22a0],xmm0
1004754d:	00 
1004754e:	83 bf e4 01 00 00 00 	cmp    DWORD PTR [edi+0x1e4],0x0
10047555:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004755a:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1004755e:	0f 5a c0             	cvtps2pd xmm0,xmm0
10047561:	f2 0f 58 05 f8 1d 1a 	addsd  xmm0,QWORD PTR ds:0x101a1df8
10047568:	10 
10047569:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1004756d:	f3 0f 11 87 cc 01 00 	movss  DWORD PTR [edi+0x1cc],xmm0
10047574:	00 
10047575:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004757a:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1004757e:	f3 0f 58 c1          	addss  xmm0,xmm1
10047582:	f3 0f 11 87 d0 01 00 	movss  DWORD PTR [edi+0x1d0],xmm0
10047589:	00 
1004758a:	7f 15                	jg     0x100475a1
1004758c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10047591:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10047595:	f3 0f 58 c1          	addss  xmm0,xmm1
10047599:	f3 0f 11 87 cc 01 00 	movss  DWORD PTR [edi+0x1cc],xmm0
100475a0:	00 
100475a1:	5f                   	pop    edi
100475a2:	5e                   	pop    esi
100475a3:	8b e5                	mov    esp,ebp
100475a5:	5d                   	pop    ebp
100475a6:	c3                   	ret
