
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1005ff90 <.text+0x5ef90>:
1005ff90:	53                   	push   ebx
1005ff91:	8b d9                	mov    ebx,ecx
1005ff93:	56                   	push   esi
1005ff94:	8d 8b f8 01 00 00    	lea    ecx,[ebx+0x1f8]
1005ff9a:	e8 01 78 fb ff       	call   0x100177a0
1005ff9f:	8b c8                	mov    ecx,eax
1005ffa1:	8b 10                	mov    edx,DWORD PTR [eax]
1005ffa3:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1005ffa9:	85 c0                	test   eax,eax
1005ffab:	0f 84 88 01 00 00    	je     0x10060139
1005ffb1:	8d 8b f8 01 00 00    	lea    ecx,[ebx+0x1f8]
1005ffb7:	e8 e4 77 fb ff       	call   0x100177a0
1005ffbc:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1005ffbf:	50                   	push   eax
1005ffc0:	e8 1b 26 fb ff       	call   0x100125e0
1005ffc5:	8b f0                	mov    esi,eax
1005ffc7:	83 c4 04             	add    esp,0x4
1005ffca:	85 f6                	test   esi,esi
1005ffcc:	0f 84 67 01 00 00    	je     0x10060139
1005ffd2:	8b 86 2c 25 00 00    	mov    eax,DWORD PTR [esi+0x252c]
1005ffd8:	c7 86 a0 1e 00 00 00 	mov    DWORD PTR [esi+0x1ea0],0x0
1005ffdf:	00 00 00 
1005ffe2:	85 c0                	test   eax,eax
1005ffe4:	0f 84 4f 01 00 00    	je     0x10060139
1005ffea:	57                   	push   edi
1005ffeb:	8b 78 04             	mov    edi,DWORD PTR [eax+0x4]
1005ffee:	ba 50 de 1a 10       	mov    edx,0x101ade50
1005fff3:	8b 8f 0c 02 00 00    	mov    ecx,DWORD PTR [edi+0x20c]
1005fff9:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
1005ffff:	f7 d9                	neg    ecx
10060001:	1b c9                	sbb    ecx,ecx
10060003:	23 c8                	and    ecx,eax
10060005:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1006000a:	8b 09                	mov    ecx,DWORD PTR [ecx]
1006000c:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
10060012:	8a 01                	mov    al,BYTE PTR [ecx]
10060014:	3a 02                	cmp    al,BYTE PTR [edx]
10060016:	75 1a                	jne    0x10060032
10060018:	84 c0                	test   al,al
1006001a:	74 12                	je     0x1006002e
1006001c:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
1006001f:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
10060022:	75 0e                	jne    0x10060032
10060024:	83 c1 02             	add    ecx,0x2
10060027:	83 c2 02             	add    edx,0x2
1006002a:	84 c0                	test   al,al
1006002c:	75 e4                	jne    0x10060012
1006002e:	33 c0                	xor    eax,eax
10060030:	eb 05                	jmp    0x10060037
10060032:	1b c0                	sbb    eax,eax
10060034:	83 c8 01             	or     eax,0x1
10060037:	85 c0                	test   eax,eax
10060039:	0f 85 f9 00 00 00    	jne    0x10060138
1006003f:	57                   	push   edi
10060040:	e8 eb 2d ff ff       	call   0x10052e30
10060045:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
10060048:	83 c4 04             	add    esp,0x4
1006004b:	8b f8                	mov    edi,eax
1006004d:	8b 89 cc 01 00 00    	mov    ecx,DWORD PTR [ecx+0x1cc]
10060053:	85 c9                	test   ecx,ecx
10060055:	74 22                	je     0x10060079
10060057:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1006005c:	51                   	push   ecx
1006005d:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
10060064:	6a 03                	push   0x3
10060066:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1006006c:	53                   	push   ebx
1006006d:	03 c1                	add    eax,ecx
1006006f:	53                   	push   ebx
10060070:	50                   	push   eax
10060071:	e8 7a 1f 0a 00       	call   0x10101ff0
10060076:	83 c4 14             	add    esp,0x14
10060079:	85 ff                	test   edi,edi
1006007b:	0f 84 b7 00 00 00    	je     0x10060138
10060081:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10060086:	8b cf                	mov    ecx,edi
10060088:	83 be 98 1e 00 00 00 	cmp    DWORD PTR [esi+0x1e98],0x0
1006008f:	6a 00                	push   0x0
10060091:	6a 01                	push   0x1
10060093:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10060097:	8b 07                	mov    eax,DWORD PTR [edi]
10060099:	0f 5a c0             	cvtps2pd xmm0,xmm0
1006009c:	f2 0f 58 05 f0 5f 1b 	addsd  xmm0,QWORD PTR ds:0x101b5ff0
100600a3:	10 
100600a4:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100600a8:	f3 0f 11 87 d8 01 00 	movss  DWORD PTR [edi+0x1d8],xmm0
100600af:	00 
100600b0:	74 04                	je     0x100600b6
100600b2:	6a 10                	push   0x10
100600b4:	eb 02                	jmp    0x100600b8
100600b6:	6a 0f                	push   0xf
100600b8:	ff 90 98 01 00 00    	call   DWORD PTR [eax+0x198]
100600be:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100600c3:	6a 64                	push   0x64
100600c5:	6a 00                	push   0x0
100600c7:	83 ec 08             	sub    esp,0x8
100600ca:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100600ce:	0f 5a c0             	cvtps2pd xmm0,xmm0
100600d1:	f2 0f 58 05 f0 5f 1b 	addsd  xmm0,QWORD PTR ds:0x101b5ff0
100600d8:	10 
100600d9:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100600dd:	f3 0f 11 86 08 03 00 	movss  DWORD PTR [esi+0x308],xmm0
100600e4:	00 
100600e5:	c6 86 e8 1e 00 00 00 	mov    BYTE PTR [esi+0x1ee8],0x0
100600ec:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100600ef:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100600f6:	3f 
100600f7:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100600fe:	68 28 2a 1b 10       	push   0x101b2a28
10060103:	6a 00                	push   0x0
10060105:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1006010b:	e8 e0 c8 09 00       	call   0x100fc9f0
10060110:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10060113:	83 c4 1c             	add    esp,0x1c
10060116:	83 a6 00 25 00 00 f7 	and    DWORD PTR [esi+0x2500],0xfffffff7
1006011d:	c7 86 b4 1e 00 00 00 	mov    DWORD PTR [esi+0x1eb4],0x0
10060124:	00 00 00 
10060127:	c7 80 60 02 00 00 00 	mov    DWORD PTR [eax+0x260],0x0
1006012e:	00 00 00 
10060131:	c7 43 78 00 00 00 00 	mov    DWORD PTR [ebx+0x78],0x0
10060138:	5f                   	pop    edi
10060139:	5e                   	pop    esi
1006013a:	5b                   	pop    ebx
1006013b:	c3                   	ret
