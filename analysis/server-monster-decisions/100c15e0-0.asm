
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c15e0 <.text+0xc05e0>:
100c15e0:	53                   	push   ebx
100c15e1:	8b d9                	mov    ebx,ecx
100c15e3:	56                   	push   esi
100c15e4:	57                   	push   edi
100c15e5:	bf 03 00 00 00       	mov    edi,0x3
100c15ea:	8d b3 ac 01 00 00    	lea    esi,[ebx+0x1ac]
100c15f0:	8b ce                	mov    ecx,esi
100c15f2:	e8 89 61 f5 ff       	call   0x10017780
100c15f7:	85 c0                	test   eax,eax
100c15f9:	74 1d                	je     0x100c1618
100c15fb:	8b ce                	mov    ecx,esi
100c15fd:	e8 9e 61 f5 ff       	call   0x100177a0
100c1602:	8b c8                	mov    ecx,eax
100c1604:	8b 10                	mov    edx,DWORD PTR [eax]
100c1606:	ff 92 bc 00 00 00    	call   DWORD PTR [edx+0xbc]
100c160c:	85 c0                	test   eax,eax
100c160e:	75 16                	jne    0x100c1626
100c1610:	50                   	push   eax
100c1611:	8b ce                	mov    ecx,esi
100c1613:	e8 28 61 f5 ff       	call   0x10017740
100c1618:	83 ee 08             	sub    esi,0x8
100c161b:	83 ef 01             	sub    edi,0x1
100c161e:	79 d0                	jns    0x100c15f0
100c1620:	5f                   	pop    edi
100c1621:	5e                   	pop    esi
100c1622:	33 c0                	xor    eax,eax
100c1624:	5b                   	pop    ebx
100c1625:	c3                   	ret
100c1626:	8b 06                	mov    eax,DWORD PTR [esi]
100c1628:	89 83 84 01 00 00    	mov    DWORD PTR [ebx+0x184],eax
100c162e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c1631:	89 83 88 01 00 00    	mov    DWORD PTR [ebx+0x188],eax
100c1637:	8d 04 7f             	lea    eax,[edi+edi*2]
100c163a:	f3 0f 7e 84 83 b4 01 	movq   xmm0,QWORD PTR [ebx+eax*4+0x1b4]
100c1641:	00 00 
100c1643:	66 0f d6 83 f4 02 00 	movq   QWORD PTR [ebx+0x2f4],xmm0
100c164a:	00 
100c164b:	8b 84 83 bc 01 00 00 	mov    eax,DWORD PTR [ebx+eax*4+0x1bc]
100c1652:	5f                   	pop    edi
100c1653:	89 83 fc 02 00 00    	mov    DWORD PTR [ebx+0x2fc],eax
100c1659:	b8 01 00 00 00       	mov    eax,0x1
100c165e:	5e                   	pop    esi
100c165f:	5b                   	pop    ebx
100c1660:	c3                   	ret
