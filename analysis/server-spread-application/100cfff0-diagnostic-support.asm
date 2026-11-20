
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100cfff0 <.text+0xceff0>:
100cfff0:	57                   	push   edi
100cfff1:	68 c8 76 1d 10       	push   0x101d76c8
100cfff6:	6a 01                	push   0x1
100cfff8:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cfffe:	ff 35 80 59 22 10    	push   DWORD PTR ds:0x10225980
100d0004:	68 e8 76 1d 10       	push   0x101d76e8
100d0009:	6a 01                	push   0x1
100d000b:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100d0011:	68 fc 76 1d 10       	push   0x101d76fc
100d0016:	6a 01                	push   0x1
100d0018:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100d001e:	33 ff                	xor    edi,edi
100d0020:	83 c4 1c             	add    esp,0x1c
100d0023:	39 3d 80 59 22 10    	cmp    DWORD PTR ds:0x10225980,edi
100d0029:	0f 8e ec 01 00 00    	jle    0x100d021b
100d002f:	56                   	push   esi
100d0030:	be 50 5a 22 10       	mov    esi,0x10225a50
100d0035:	8d 46 e0             	lea    eax,[esi-0x20]
100d0038:	50                   	push   eax
100d0039:	68 00 77 1d 10       	push   0x101d7700
100d003e:	6a 01                	push   0x1
100d0040:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100d0046:	f3 0f 10 06          	movss  xmm0,DWORD PTR [esi]
100d004a:	83 c4 04             	add    esp,0x4
100d004d:	0f 5a c0             	cvtps2pd xmm0,xmm0
100d0050:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
100d0055:	68 08 77 1d 10       	push   0x101d7708
100d005a:	6a 01                	push   0x1
100d005c:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100d0062:	f3 0f 10 46 0c       	movss  xmm0,DWORD PTR [esi+0xc]
100d0067:	83 c4 08             	add    esp,0x8
100d006a:	0f 5a c0             	cvtps2pd xmm0,xmm0
100d006d:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
100d0072:	68 20 77 1d 10       	push   0x101d7720
100d0077:	6a 01                	push   0x1
100d0079:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100d007f:	ff 76 18             	push   DWORD PTR [esi+0x18]
100d0082:	68 38 77 1d 10       	push   0x101d7738
100d0087:	6a 01                	push   0x1
100d0089:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100d008f:	f3 0f 10 46 1c       	movss  xmm0,DWORD PTR [esi+0x1c]
100d0094:	83 c4 14             	add    esp,0x14
100d0097:	0f 5a c0             	cvtps2pd xmm0,xmm0
100d009a:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
100d009f:	68 50 77 1d 10       	push   0x101d7750
100d00a4:	6a 01                	push   0x1
100d00a6:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100d00ac:	f3 0f 10 46 34       	movss  xmm0,DWORD PTR [esi+0x34]
100d00b1:	0f 5a c0             	cvtps2pd xmm0,xmm0
100d00b4:	f2 0f 11 44 24 08    	movsd  QWORD PTR [esp+0x8],xmm0
100d00ba:	f3 0f 10 46 28       	movss  xmm0,DWORD PTR [esi+0x28]
100d00bf:	0f 5a c0             	cvtps2pd xmm0,xmm0
100d00c2:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
100d00c7:	83 ec 20             	sub    esp,0x20
100d00ca:	f3 0f 10 46 30       	movss  xmm0,DWORD PTR [esi+0x30]
100d00cf:	0f 5a c0             	cvtps2pd xmm0,xmm0
100d00d2:	f2 0f 11 44 24 18    	movsd  QWORD PTR [esp+0x18],xmm0
100d00d8:	f3 0f 10 46 24       	movss  xmm0,DWORD PTR [esi+0x24]
100d00dd:	0f 5a c0             	cvtps2pd xmm0,xmm0
100d00e0:	f2 0f 11 44 24 10    	movsd  QWORD PTR [esp+0x10],xmm0
100d00e6:	f3 0f 10 46 2c       	movss  xmm0,DWORD PTR [esi+0x2c]
100d00eb:	0f 5a c0             	cvtps2pd xmm0,xmm0
100d00ee:	f2 0f 11 44 24 08    	movsd  QWORD PTR [esp+0x8],xmm0
100d00f4:	f3 0f 10 46 20       	movss  xmm0,DWORD PTR [esi+0x20]
100d00f9:	0f 5a c0             	cvtps2pd xmm0,xmm0
100d00fc:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
100d0101:	68 68 77 1d 10       	push   0x101d7768
100d0106:	6a 01                	push   0x1
100d0108:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100d010e:	f3 0f 10 46 38       	movss  xmm0,DWORD PTR [esi+0x38]
100d0113:	83 c4 30             	add    esp,0x30
100d0116:	0f 5a c0             	cvtps2pd xmm0,xmm0
100d0119:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
100d011e:	68 94 77 1d 10       	push   0x101d7794
100d0123:	6a 01                	push   0x1
100d0125:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100d012b:	f3 0f 10 46 44       	movss  xmm0,DWORD PTR [esi+0x44]
100d0130:	83 c4 08             	add    esp,0x8
100d0133:	0f 5a c0             	cvtps2pd xmm0,xmm0
100d0136:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
100d013b:	68 ac 77 1d 10       	push   0x101d77ac
100d0140:	6a 01                	push   0x1
100d0142:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100d0148:	ff 76 50             	push   DWORD PTR [esi+0x50]
100d014b:	68 c4 77 1d 10       	push   0x101d77c4
100d0150:	6a 01                	push   0x1
100d0152:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100d0158:	f3 0f 10 46 54       	movss  xmm0,DWORD PTR [esi+0x54]
100d015d:	83 c4 14             	add    esp,0x14
100d0160:	0f 5a c0             	cvtps2pd xmm0,xmm0
100d0163:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
100d0168:	68 dc 77 1d 10       	push   0x101d77dc
100d016d:	6a 01                	push   0x1
100d016f:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100d0175:	f3 0f 10 46 6c       	movss  xmm0,DWORD PTR [esi+0x6c]
100d017a:	0f 5a c0             	cvtps2pd xmm0,xmm0
100d017d:	f2 0f 11 44 24 08    	movsd  QWORD PTR [esp+0x8],xmm0
100d0183:	f3 0f 10 46 60       	movss  xmm0,DWORD PTR [esi+0x60]
100d0188:	0f 5a c0             	cvtps2pd xmm0,xmm0
100d018b:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
100d0190:	83 ec 20             	sub    esp,0x20
100d0193:	f3 0f 10 46 68       	movss  xmm0,DWORD PTR [esi+0x68]
100d0198:	0f 5a c0             	cvtps2pd xmm0,xmm0
100d019b:	f2 0f 11 44 24 18    	movsd  QWORD PTR [esp+0x18],xmm0
100d01a1:	f3 0f 10 46 5c       	movss  xmm0,DWORD PTR [esi+0x5c]
100d01a6:	0f 5a c0             	cvtps2pd xmm0,xmm0
100d01a9:	f2 0f 11 44 24 10    	movsd  QWORD PTR [esp+0x10],xmm0
100d01af:	f3 0f 10 46 64       	movss  xmm0,DWORD PTR [esi+0x64]
100d01b4:	0f 5a c0             	cvtps2pd xmm0,xmm0
100d01b7:	f2 0f 11 44 24 08    	movsd  QWORD PTR [esp+0x8],xmm0
100d01bd:	f3 0f 10 46 58       	movss  xmm0,DWORD PTR [esi+0x58]
100d01c2:	0f 5a c0             	cvtps2pd xmm0,xmm0
100d01c5:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
100d01ca:	68 f4 77 1d 10       	push   0x101d77f4
100d01cf:	6a 01                	push   0x1
100d01d1:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100d01d7:	f3 0f 10 86 80 00 00 	movss  xmm0,DWORD PTR [esi+0x80]
100d01de:	00 
100d01df:	83 c4 30             	add    esp,0x30
100d01e2:	0f 5a c0             	cvtps2pd xmm0,xmm0
100d01e5:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
100d01ea:	68 20 78 1d 10       	push   0x101d7820
100d01ef:	6a 01                	push   0x1
100d01f1:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100d01f7:	68 fc 76 1d 10       	push   0x101d76fc
100d01fc:	6a 01                	push   0x1
100d01fe:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100d0204:	47                   	inc    edi
100d0205:	8d b6 a4 00 00 00    	lea    esi,[esi+0xa4]
100d020b:	83 c4 18             	add    esp,0x18
100d020e:	3b 3d 80 59 22 10    	cmp    edi,DWORD PTR ds:0x10225980
100d0214:	0f 8c 1b fe ff ff    	jl     0x100d0035
100d021a:	5e                   	pop    esi
100d021b:	68 38 78 1d 10       	push   0x101d7838
100d0220:	6a 01                	push   0x1
100d0222:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100d0228:	83 c4 08             	add    esp,0x8
100d022b:	5f                   	pop    edi
100d022c:	c3                   	ret
