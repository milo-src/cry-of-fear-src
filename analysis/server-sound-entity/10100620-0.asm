
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10100620 <.text+0xff620>:
10100620:	55                   	push   ebp
10100621:	8b ec                	mov    ebp,esp
10100623:	8b 0d 70 0d 23 10    	mov    ecx,DWORD PTR ds:0x10230d70
10100629:	85 c9                	test   ecx,ecx
1010062b:	74 4b                	je     0x10100678
1010062d:	56                   	push   esi
1010062e:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
10100631:	57                   	push   edi
10100632:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
10100635:	8b d7                	mov    edx,edi
10100637:	c1 e2 05             	shl    edx,0x5
1010063a:	8b 84 0a 04 01 00 00 	mov    eax,DWORD PTR [edx+ecx*1+0x104]
10100641:	83 fe ff             	cmp    esi,0xffffffff
10100644:	74 0c                	je     0x10100652
10100646:	c1 e6 05             	shl    esi,0x5
10100649:	89 84 0e 04 01 00 00 	mov    DWORD PTR [esi+ecx*1+0x104],eax
10100650:	eb 06                	jmp    0x10100658
10100652:	89 81 e0 00 00 00    	mov    DWORD PTR [ecx+0xe0],eax
10100658:	8b 0d 70 0d 23 10    	mov    ecx,DWORD PTR ds:0x10230d70
1010065e:	8b 81 dc 00 00 00    	mov    eax,DWORD PTR [ecx+0xdc]
10100664:	89 84 0a 04 01 00 00 	mov    DWORD PTR [edx+ecx*1+0x104],eax
1010066b:	a1 70 0d 23 10       	mov    eax,ds:0x10230d70
10100670:	89 b8 dc 00 00 00    	mov    DWORD PTR [eax+0xdc],edi
10100676:	5f                   	pop    edi
10100677:	5e                   	pop    esi
10100678:	5d                   	pop    ebp
10100679:	c3                   	ret
