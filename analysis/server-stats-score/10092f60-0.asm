
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10092f60 <.text+0x91f60>:
10092f60:	55                   	push   ebp
10092f61:	8b ec                	mov    ebp,esp
10092f63:	56                   	push   esi
10092f64:	57                   	push   edi
10092f65:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
10092f68:	8b cf                	mov    ecx,edi
10092f6a:	e8 41 90 04 00       	call   0x100dbfb0
10092f6f:	8b 87 6c 06 00 00    	mov    eax,DWORD PTR [edi+0x66c]
10092f75:	dd d8                	fstp   st(0)
10092f77:	8b 97 7c 06 00 00    	mov    edx,DWORD PTR [edi+0x67c]
10092f7d:	8b c8                	mov    ecx,eax
10092f7f:	c1 e1 04             	shl    ecx,0x4
10092f82:	2b c8                	sub    ecx,eax
10092f84:	f3 0f 10 87 4c 06 00 	movss  xmm0,DWORD PTR [edi+0x64c]
10092f8b:	00 
10092f8c:	8b 87 68 06 00 00    	mov    eax,DWORD PTR [edi+0x668]
10092f92:	f3 0f 10 0d 70 b6 1a 	movss  xmm1,DWORD PTR ds:0x101ab670
10092f99:	10 
10092f9a:	8d 34 88             	lea    esi,[eax+ecx*4]
10092f9d:	33 c0                	xor    eax,eax
10092f9f:	83 fa 01             	cmp    edx,0x1
10092fa2:	b9 04 00 00 00       	mov    ecx,0x4
10092fa7:	0f 45 c8             	cmovne ecx,eax
10092faa:	83 fa 02             	cmp    edx,0x2
10092fad:	8d 41 04             	lea    eax,[ecx+0x4]
10092fb0:	0f 45 c1             	cmovne eax,ecx
10092fb3:	83 fa 03             	cmp    edx,0x3
10092fb6:	8d 48 04             	lea    ecx,[eax+0x4]
10092fb9:	0f 45 c8             	cmovne ecx,eax
10092fbc:	83 fa 04             	cmp    edx,0x4
10092fbf:	8d 41 04             	lea    eax,[ecx+0x4]
10092fc2:	0f 45 c1             	cmovne eax,ecx
10092fc5:	0f 2f 05 f4 1e 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1ef4
10092fcc:	8b c8                	mov    ecx,eax
10092fce:	72 08                	jb     0x10092fd8
10092fd0:	0f 2f c8             	comiss xmm1,xmm0
10092fd3:	76 03                	jbe    0x10092fd8
10092fd5:	8d 48 01             	lea    ecx,[eax+0x1]
10092fd8:	0f 2f c1             	comiss xmm0,xmm1
10092fdb:	f3 0f 10 0d fc 1e 1a 	movss  xmm1,DWORD PTR ds:0x101a1efc
10092fe2:	10 
10092fe3:	72 08                	jb     0x10092fed
10092fe5:	0f 2f c8             	comiss xmm1,xmm0
10092fe8:	76 03                	jbe    0x10092fed
10092fea:	83 c1 02             	add    ecx,0x2
10092fed:	0f 2f c1             	comiss xmm0,xmm1
10092ff0:	f3 0f 10 0d 00 1f 1a 	movss  xmm1,DWORD PTR ds:0x101a1f00
10092ff7:	10 
10092ff8:	72 08                	jb     0x10093002
10092ffa:	0f 2f c8             	comiss xmm1,xmm0
10092ffd:	76 03                	jbe    0x10093002
10092fff:	83 c1 03             	add    ecx,0x3
10093002:	0f 2f c1             	comiss xmm0,xmm1
10093005:	f3 0f 10 0d 18 47 1a 	movss  xmm1,DWORD PTR ds:0x101a4718
1009300c:	10 
1009300d:	72 08                	jb     0x10093017
1009300f:	0f 2f c8             	comiss xmm1,xmm0
10093012:	76 03                	jbe    0x10093017
10093014:	83 c1 04             	add    ecx,0x4
10093017:	0f 2f c1             	comiss xmm0,xmm1
1009301a:	f3 0f 10 0d 14 1f 1a 	movss  xmm1,DWORD PTR ds:0x101a1f14
10093021:	10 
10093022:	72 08                	jb     0x1009302c
10093024:	0f 2f c8             	comiss xmm1,xmm0
10093027:	76 03                	jbe    0x1009302c
10093029:	83 c1 05             	add    ecx,0x5
1009302c:	0f 2f c1             	comiss xmm0,xmm1
1009302f:	f3 0f 10 0d c0 13 1a 	movss  xmm1,DWORD PTR ds:0x101a13c0
10093036:	10 
10093037:	72 08                	jb     0x10093041
10093039:	0f 2f c8             	comiss xmm1,xmm0
1009303c:	76 03                	jbe    0x10093041
1009303e:	83 c1 06             	add    ecx,0x6
10093041:	0f 2f c1             	comiss xmm0,xmm1
10093044:	8d 41 07             	lea    eax,[ecx+0x7]
10093047:	0f 42 c1             	cmovb  eax,ecx
1009304a:	83 fe 0e             	cmp    esi,0xe
1009304d:	7f 38                	jg     0x10093087
1009304f:	83 fe 0d             	cmp    esi,0xd
10093052:	7e 03                	jle    0x10093057
10093054:	40                   	inc    eax
10093055:	eb 30                	jmp    0x10093087
10093057:	83 fe 0c             	cmp    esi,0xc
1009305a:	7e 05                	jle    0x10093061
1009305c:	83 c0 02             	add    eax,0x2
1009305f:	eb 26                	jmp    0x10093087
10093061:	83 fe 0b             	cmp    esi,0xb
10093064:	7e 05                	jle    0x1009306b
10093066:	83 c0 03             	add    eax,0x3
10093069:	eb 1c                	jmp    0x10093087
1009306b:	83 fe 0a             	cmp    esi,0xa
1009306e:	7e 05                	jle    0x10093075
10093070:	83 c0 04             	add    eax,0x4
10093073:	eb 12                	jmp    0x10093087
10093075:	83 fe 09             	cmp    esi,0x9
10093078:	7e 05                	jle    0x1009307f
1009307a:	83 c0 05             	add    eax,0x5
1009307d:	eb 08                	jmp    0x10093087
1009307f:	83 fe 08             	cmp    esi,0x8
10093082:	7e 03                	jle    0x10093087
10093084:	83 c0 06             	add    eax,0x6
10093087:	83 fe 08             	cmp    esi,0x8
1009308a:	8d 48 07             	lea    ecx,[eax+0x7]
1009308d:	0f 4f c8             	cmovg  ecx,eax
10093090:	33 c0                	xor    eax,eax
10093092:	80 bf 78 06 00 00 01 	cmp    BYTE PTR [edi+0x678],0x1
10093099:	5f                   	pop    edi
1009309a:	0f 44 c1             	cmove  eax,ecx
1009309d:	5e                   	pop    esi
1009309e:	5d                   	pop    ebp
1009309f:	c3                   	ret
