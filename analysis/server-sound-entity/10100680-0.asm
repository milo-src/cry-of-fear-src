
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10100680 <.text+0xff680>:
10100680:	8b c1                	mov    eax,ecx
10100682:	56                   	push   esi
10100683:	8b b0 dc 00 00 00    	mov    esi,DWORD PTR [eax+0xdc]
10100689:	83 fe ff             	cmp    esi,0xffffffff
1010068c:	75 14                	jne    0x101006a2
1010068e:	68 c4 ee 1d 10       	push   0x101deec4
10100693:	6a 01                	push   0x1
10100695:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1010069b:	83 c4 08             	add    esp,0x8
1010069e:	0b c6                	or     eax,esi
101006a0:	5e                   	pop    esi
101006a1:	c3                   	ret
101006a2:	8b d6                	mov    edx,esi
101006a4:	c1 e2 05             	shl    edx,0x5
101006a7:	8b 8c 02 04 01 00 00 	mov    ecx,DWORD PTR [edx+eax*1+0x104]
101006ae:	89 88 dc 00 00 00    	mov    DWORD PTR [eax+0xdc],ecx
101006b4:	8b 88 e0 00 00 00    	mov    ecx,DWORD PTR [eax+0xe0]
101006ba:	89 8c 02 04 01 00 00 	mov    DWORD PTR [edx+eax*1+0x104],ecx
101006c1:	89 b0 e0 00 00 00    	mov    DWORD PTR [eax+0xe0],esi
101006c7:	8b c6                	mov    eax,esi
101006c9:	5e                   	pop    esi
101006ca:	c3                   	ret
