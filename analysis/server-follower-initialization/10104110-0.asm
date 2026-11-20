
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10104110 <.text+0x103110>:
10104110:	56                   	push   esi
10104111:	8b f1                	mov    esi,ecx
10104113:	57                   	push   edi
10104114:	8b 06                	mov    eax,DWORD PTR [esi]
10104116:	ff 90 44 02 00 00    	call   DWORD PTR [eax+0x244]
1010411c:	85 c0                	test   eax,eax
1010411e:	0f 84 be 00 00 00    	je     0x101041e2
10104124:	f6 86 68 03 00 00 08 	test   BYTE PTR [esi+0x368],0x8
1010412b:	0f 85 b1 00 00 00    	jne    0x101041e2
10104131:	6a 01                	push   0x1
10104133:	8b ce                	mov    ecx,esi
10104135:	e8 36 05 00 00       	call   0x10104670
1010413a:	8b f8                	mov    edi,eax
1010413c:	85 ff                	test   edi,edi
1010413e:	0f 84 9e 00 00 00    	je     0x101041e2
10104144:	8b 16                	mov    edx,DWORD PTR [esi]
10104146:	8b ce                	mov    ecx,esi
10104148:	57                   	push   edi
10104149:	ff 92 54 01 00 00    	call   DWORD PTR [edx+0x154]
1010414f:	85 c0                	test   eax,eax
10104151:	0f 84 8b 00 00 00    	je     0x101041e2
10104157:	8b 06                	mov    eax,DWORD PTR [esi]
10104159:	8b ce                	mov    ecx,esi
1010415b:	57                   	push   edi
1010415c:	ff 90 14 01 00 00    	call   DWORD PTR [eax+0x114]
10104162:	85 c0                	test   eax,eax
10104164:	74 7c                	je     0x101041e2
10104166:	57                   	push   edi
10104167:	8d 8e e0 03 00 00    	lea    ecx,[esi+0x3e0]
1010416d:	e8 ce 35 f1 ff       	call   0x10017740
10104172:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10104175:	83 ec 10             	sub    esp,0x10
10104178:	8b 3e                	mov    edi,DWORD PTR [esi]
1010417a:	f7 80 a4 01 00 00 00 	test   DWORD PTR [eax+0x1a4],0x100
10104181:	01 00 00 
10104184:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x40000000
1010418b:	40 
1010418c:	c7 44 24 08 00 00 80 	mov    DWORD PTR [esp+0x8],0x3f800000
10104193:	3f 
10104194:	c7 44 24 04 00 00 60 	mov    DWORD PTR [esp+0x4],0x40600000
1010419b:	40 
1010419c:	c7 04 24 00 00 40 40 	mov    DWORD PTR [esp],0x40400000
101041a3:	74 14                	je     0x101041b9
101041a5:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
101041ab:	83 c4 04             	add    esp,0x4
101041ae:	d9 1c 24             	fstp   DWORD PTR [esp]
101041b1:	ff b6 9c 03 00 00    	push   DWORD PTR [esi+0x39c]
101041b7:	eb 12                	jmp    0x101041cb
101041b9:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
101041bf:	83 c4 04             	add    esp,0x4
101041c2:	d9 1c 24             	fstp   DWORD PTR [esp]
101041c5:	ff b6 98 03 00 00    	push   DWORD PTR [esi+0x398]
101041cb:	8b ce                	mov    ecx,esi
101041cd:	ff 97 a0 01 00 00    	call   DWORD PTR [edi+0x1a0]
101041d3:	83 8e 68 03 00 00 08 	or     DWORD PTR [esi+0x368],0x8
101041da:	b8 01 00 00 00       	mov    eax,0x1
101041df:	5f                   	pop    edi
101041e0:	5e                   	pop    esi
101041e1:	c3                   	ret
101041e2:	5f                   	pop    edi
101041e3:	33 c0                	xor    eax,eax
101041e5:	5e                   	pop    esi
101041e6:	c3                   	ret
