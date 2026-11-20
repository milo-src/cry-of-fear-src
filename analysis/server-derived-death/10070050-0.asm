
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10070050 <.text+0x6f050>:
10070050:	55                   	push   ebp
10070051:	8b ec                	mov    ebp,esp
10070053:	51                   	push   ecx
10070054:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10070059:	56                   	push   esi
1007005a:	be 01 00 00 00       	mov    esi,0x1
1007005f:	57                   	push   edi
10070060:	8b f9                	mov    edi,ecx
10070062:	39 b0 90 00 00 00    	cmp    DWORD PTR [eax+0x90],esi
10070068:	7c 7b                	jl     0x100700e5
1007006a:	53                   	push   ebx
1007006b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
10070070:	56                   	push   esi
10070071:	e8 0a 96 0a 00       	call   0x10119680
10070076:	8b d8                	mov    ebx,eax
10070078:	83 c4 04             	add    esp,0x4
1007007b:	85 db                	test   ebx,ebx
1007007d:	74 57                	je     0x100700d6
1007007f:	68 80 15 1b 10       	push   0x101b1580
10070084:	ff 15 30 30 22 10    	call   DWORD PTR ds:0x10223030
1007008a:	8b d0                	mov    edx,eax
1007008c:	83 c4 04             	add    esp,0x4
1007008f:	85 d2                	test   edx,edx
10070091:	74 43                	je     0x100700d6
10070093:	8b ca                	mov    ecx,edx
10070095:	8d 41 01             	lea    eax,[ecx+0x1]
10070098:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
1007009b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100700a0:	8a 01                	mov    al,BYTE PTR [ecx]
100700a2:	41                   	inc    ecx
100700a3:	84 c0                	test   al,al
100700a5:	75 f9                	jne    0x100700a0
100700a7:	2b 4d fc             	sub    ecx,DWORD PTR [ebp-0x4]
100700aa:	83 f9 01             	cmp    ecx,0x1
100700ad:	76 27                	jbe    0x100700d6
100700af:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100700b4:	f3 0f 10 05 1c 2f 22 	movss  xmm0,DWORD PTR ds:0x10222f1c
100700bb:	10 
100700bc:	51                   	push   ecx
100700bd:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100700c2:	8b cb                	mov    ecx,ebx
100700c4:	ff 35 18 2f 22 10    	push   DWORD PTR ds:0x10222f18
100700ca:	2b 90 98 00 00 00    	sub    edx,DWORD PTR [eax+0x98]
100700d0:	52                   	push   edx
100700d1:	e8 ea a4 07 00       	call   0x100ea5c0
100700d6:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100700db:	46                   	inc    esi
100700dc:	3b b0 90 00 00 00    	cmp    esi,DWORD PTR [eax+0x90]
100700e2:	7e 8c                	jle    0x10070070
100700e4:	5b                   	pop    ebx
100700e5:	83 3d 14 2f 22 10 00 	cmp    DWORD PTR ds:0x10222f14,0x0
100700ec:	0f 84 ad 00 00 00    	je     0x1007019f
100700f2:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100700f8:	8b 01                	mov    eax,DWORD PTR [ecx]
100700fa:	ff 50 20             	call   DWORD PTR [eax+0x20]
100700fd:	85 c0                	test   eax,eax
100700ff:	0f 84 9a 00 00 00    	je     0x1007019f
10070105:	68 f0 00 00 00       	push   0xf0
1007010a:	6a 78                	push   0x78
1007010c:	c6 05 a1 31 22 10 00 	mov    BYTE PTR ds:0x102231a1,0x0
10070113:	c6 05 24 2f 22 10 00 	mov    BYTE PTR ds:0x10222f24,0x0
1007011a:	c6 05 a2 31 22 10 01 	mov    BYTE PTR ds:0x102231a2,0x1
10070121:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
10070127:	6a 00                	push   0x0
10070129:	6a 00                	push   0x0
1007012b:	ff 35 a8 66 22 10    	push   DWORD PTR ds:0x102266a8
10070131:	66 0f 6e c0          	movd   xmm0,eax
10070135:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1007013a:	0f 5b c0             	cvtdq2ps xmm0,xmm0
1007013d:	6a 02                	push   0x2
1007013f:	f3 0f 58 00          	addss  xmm0,DWORD PTR [eax]
10070143:	f3 0f 11 05 a4 31 22 	movss  DWORD PTR ds:0x102231a4,xmm0
1007014a:	10 
1007014b:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
10070151:	6a 00                	push   0x0
10070153:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10070159:	6a 00                	push   0x0
1007015b:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10070161:	6a 02                	push   0x2
10070163:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10070169:	83 c4 24             	add    esp,0x24
1007016c:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
10070172:	8b 87 88 03 00 00    	mov    eax,DWORD PTR [edi+0x388]
10070178:	85 c0                	test   eax,eax
1007017a:	74 23                	je     0x1007019f
1007017c:	50                   	push   eax
1007017d:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10070180:	8b 08                	mov    ecx,DWORD PTR [eax]
10070182:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10070187:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1007018d:	51                   	push   ecx
1007018e:	8b cf                	mov    ecx,edi
10070190:	e8 2b ee 04 00       	call   0x100befc0
10070195:	c7 87 88 03 00 00 00 	mov    DWORD PTR [edi+0x388],0x0
1007019c:	00 00 00 
1007019f:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100701a2:	81 8f ec 02 00 00 80 	or     DWORD PTR [edi+0x2ec],0x80
100701a9:	00 00 00 
100701ac:	6a 64                	push   0x64
100701ae:	6a 00                	push   0x0
100701b0:	83 ec 08             	sub    esp,0x8
100701b3:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100701ba:	3f 
100701bb:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100701c2:	68 68 40 1a 10       	push   0x101a4068
100701c7:	6a 01                	push   0x1
100701c9:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100701cf:	e8 1c c8 08 00       	call   0x100fc9f0
100701d4:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100701d7:	83 c4 1c             	add    esp,0x1c
100701da:	81 8f 80 01 00 00 00 	or     DWORD PTR [edi+0x180],0x100
100701e1:	01 00 00 
100701e4:	c7 87 28 02 00 00 08 	mov    DWORD PTR [edi+0x228],0x8
100701eb:	00 00 00 
100701ee:	8b 81 9c 01 00 00    	mov    eax,DWORD PTR [ecx+0x19c]
100701f4:	85 c0                	test   eax,eax
100701f6:	75 11                	jne    0x10070209
100701f8:	50                   	push   eax
100701f9:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
100701ff:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
10070202:	83 c4 04             	add    esp,0x4
10070205:	85 c0                	test   eax,eax
10070207:	74 12                	je     0x1007021b
10070209:	8b 50 7c             	mov    edx,DWORD PTR [eax+0x7c]
1007020c:	85 d2                	test   edx,edx
1007020e:	74 0b                	je     0x1007021b
10070210:	8b 02                	mov    eax,DWORD PTR [edx]
10070212:	51                   	push   ecx
10070213:	8b ca                	mov    ecx,edx
10070215:	ff 50 54             	call   DWORD PTR [eax+0x54]
10070218:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1007021b:	f6 81 a8 01 00 00 20 	test   BYTE PTR [ecx+0x1a8],0x20
10070222:	74 14                	je     0x10070238
10070224:	8b 07                	mov    eax,DWORD PTR [edi]
10070226:	8b cf                	mov    ecx,edi
10070228:	c7 47 7c 00 00 00 00 	mov    DWORD PTR [edi+0x7c],0x0
1007022f:	ff 90 44 01 00 00    	call   DWORD PTR [eax+0x144]
10070235:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
10070238:	f3 0f 10 05 20 b0 1a 	movss  xmm0,DWORD PTR ds:0x101ab020
1007023f:	10 
10070240:	0f 2f 81 64 01 00 00 	comiss xmm0,DWORD PTR [ecx+0x164]
10070247:	76 0a                	jbe    0x10070253
10070249:	c7 81 64 01 00 00 00 	mov    DWORD PTR [ecx+0x164],0x0
10070250:	00 00 00 
10070253:	57                   	push   edi
10070254:	c7 87 28 02 00 00 08 	mov    DWORD PTR [edi+0x228],0x8
1007025b:	00 00 00 
1007025e:	e8 9d 96 0a 00       	call   0x10119900
10070263:	83 c4 04             	add    esp,0x4
10070266:	5f                   	pop    edi
10070267:	5e                   	pop    esi
10070268:	8b e5                	mov    esp,ebp
1007026a:	5d                   	pop    ebp
1007026b:	c3                   	ret
