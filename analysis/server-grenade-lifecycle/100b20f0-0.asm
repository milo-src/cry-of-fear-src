
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100b20f0 <.text+0xb10f0>:
100b20f0:	55                   	push   ebp
100b20f1:	8b ec                	mov    ebp,esp
100b20f3:	83 ec 18             	sub    esp,0x18
100b20f6:	56                   	push   esi
100b20f7:	8b f1                	mov    esi,ecx
100b20f9:	ba 64 eb 1c 10       	mov    edx,0x101ceb64
100b20fe:	68 70 a9 1c 10       	push   0x101ca970
100b2103:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b2106:	c7 80 08 01 00 00 0a 	mov    DWORD PTR [eax+0x108],0xa
100b210d:	00 00 00 
100b2110:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100b2115:	2b 90 98 00 00 00    	sub    edx,DWORD PTR [eax+0x98]
100b211b:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b211e:	89 10                	mov    DWORD PTR [eax],edx
100b2120:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b2123:	c7 80 0c 01 00 00 02 	mov    DWORD PTR [eax+0x10c],0x2
100b212a:	00 00 00 
100b212d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b2130:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100b2136:	ff 15 50 2f 22 10    	call   DWORD PTR ds:0x10222f50
100b213c:	8d 45 f4             	lea    eax,[ebp-0xc]
100b213f:	c7 45 f4 00 00 00 00 	mov    DWORD PTR [ebp-0xc],0x0
100b2146:	50                   	push   eax
100b2147:	8d 45 e8             	lea    eax,[ebp-0x18]
100b214a:	c7 45 f8 00 00 00 00 	mov    DWORD PTR [ebp-0x8],0x0
100b2151:	50                   	push   eax
100b2152:	ff 76 04             	push   DWORD PTR [esi+0x4]
100b2155:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
100b215c:	c7 45 e8 00 00 00 00 	mov    DWORD PTR [ebp-0x18],0x0
100b2163:	c7 45 ec 00 00 00 00 	mov    DWORD PTR [ebp-0x14],0x0
100b216a:	c7 45 f0 00 00 00 00 	mov    DWORD PTR [ebp-0x10],0x0
100b2171:	e8 ba 7e 06 00       	call   0x1011a030
100b2176:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b2179:	83 c4 14             	add    esp,0x14
100b217c:	c7 80 e4 01 00 00 00 	mov    DWORD PTR [eax+0x1e4],0x42c80000
100b2183:	00 c8 42 
100b2186:	c7 86 68 03 00 00 00 	mov    DWORD PTR [esi+0x368],0x0
100b218d:	00 00 00 
100b2190:	5e                   	pop    esi
100b2191:	8b e5                	mov    esp,ebp
100b2193:	5d                   	pop    ebp
100b2194:	c3                   	ret
