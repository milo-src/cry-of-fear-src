
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100150e0 <.text+0x140e0>:
100150e0:	55                   	push   ebp
100150e1:	8b ec                	mov    ebp,esp
100150e3:	83 ec 08             	sub    esp,0x8
100150e6:	57                   	push   edi
100150e7:	8b f9                	mov    edi,ecx
100150e9:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100150ec:	c7 47 78 00 00 00 00 	mov    DWORD PTR [edi+0x78],0x0
100150f3:	c7 87 80 00 00 00 00 	mov    DWORD PTR [edi+0x80],0x0
100150fa:	00 00 00 
100150fd:	8b 80 a4 01 00 00    	mov    eax,DWORD PTR [eax+0x1a4]
10015103:	a8 10                	test   al,0x10
10015105:	74 14                	je     0x1001511b
10015107:	8b 07                	mov    eax,DWORD PTR [edi]
10015109:	c7 87 80 00 00 00 50 	mov    DWORD PTR [edi+0x80],0x10014b50
10015110:	4b 01 10 
10015113:	ff 50 30             	call   DWORD PTR [eax+0x30]
10015116:	5f                   	pop    edi
10015117:	8b e5                	mov    esp,ebp
10015119:	5d                   	pop    ebp
1001511a:	c3                   	ret
1001511b:	a8 20                	test   al,0x20
1001511d:	74 2a                	je     0x10015149
1001511f:	a8 40                	test   al,0x40
10015121:	74 13                	je     0x10015136
10015123:	c7 47 78 30 4c 01 10 	mov    DWORD PTR [edi+0x78],0x10014c30
1001512a:	b8 10 4c 01 10       	mov    eax,0x10014c10
1001512f:	b9 30 4c 01 10       	mov    ecx,0x10014c30
10015134:	eb 07                	jmp    0x1001513d
10015136:	b8 a0 4b 01 10       	mov    eax,0x10014ba0
1001513b:	33 c9                	xor    ecx,ecx
1001513d:	89 87 80 00 00 00    	mov    DWORD PTR [edi+0x80],eax
10015143:	85 c9                	test   ecx,ecx
10015145:	74 5c                	je     0x100151a3
10015147:	eb 07                	jmp    0x10015150
10015149:	c7 47 78 30 4c 01 10 	mov    DWORD PTR [edi+0x78],0x10014c30
10015150:	56                   	push   esi
10015151:	8b 37                	mov    esi,DWORD PTR [edi]
10015153:	83 ec 08             	sub    esp,0x8
10015156:	c7 44 24 04 00 00 c0 	mov    DWORD PTR [esp+0x4],0x3fc00000
1001515d:	3f 
1001515e:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
10015165:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
1001516b:	dd 5d f8             	fstp   QWORD PTR [ebp-0x8]
1001516e:	f2 0f 10 45 f8       	movsd  xmm0,QWORD PTR [ebp-0x8]
10015173:	83 c4 04             	add    esp,0x4
10015176:	f2 0f 58 05 f8 1d 1a 	addsd  xmm0,QWORD PTR ds:0x101a1df8
1001517d:	10 
1001517e:	8b cf                	mov    ecx,edi
10015180:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10015184:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10015189:	ff 56 08             	call   DWORD PTR [esi+0x8]
1001518c:	0f 57 c0             	xorps  xmm0,xmm0
1001518f:	0f 2f 87 dc 00 00 00 	comiss xmm0,DWORD PTR [edi+0xdc]
10015196:	5e                   	pop    esi
10015197:	72 0a                	jb     0x100151a3
10015199:	c7 87 dc 00 00 00 00 	mov    DWORD PTR [edi+0xdc],0x3fc00000
100151a0:	00 c0 3f 
100151a3:	8b 07                	mov    eax,DWORD PTR [edi]
100151a5:	8b cf                	mov    ecx,edi
100151a7:	ff 50 30             	call   DWORD PTR [eax+0x30]
100151aa:	5f                   	pop    edi
100151ab:	8b e5                	mov    esp,ebp
100151ad:	5d                   	pop    ebp
100151ae:	c3                   	ret
