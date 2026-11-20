
D:\Steam\steamapps\common\Cry of Fear\hw.dll:     file format pei-i386


Disassembly of section .text:

01d46517 <.text+0x45517>:
 1d46517:	55                   	push   ebp
 1d46518:	8b ec                	mov    ebp,esp
 1d4651a:	51                   	push   ecx
 1d4651b:	56                   	push   esi
 1d4651c:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
 1d4651f:	0b 45 0c             	or     eax,DWORD PTR [ebp+0xc]
 1d46522:	0b 45 10             	or     eax,DWORD PTR [ebp+0x10]
 1d46525:	83 e0 03             	and    eax,0x3
 1d46528:	85 c0                	test   eax,eax
 1d4652a:	75 39                	jne    0x1d46565
 1d4652c:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
 1d4652f:	c1 f9 02             	sar    ecx,0x2
 1d46532:	89 4d 10             	mov    DWORD PTR [ebp+0x10],ecx
 1d46535:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
 1d4653c:	eb 09                	jmp    0x1d46547
 1d4653e:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
 1d46541:	83 c2 01             	add    edx,0x1
 1d46544:	89 55 fc             	mov    DWORD PTR [ebp-0x4],edx
 1d46547:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
 1d4654a:	3b 45 10             	cmp    eax,DWORD PTR [ebp+0x10]
 1d4654d:	7d 14                	jge    0x1d46563
 1d4654f:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
 1d46552:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
 1d46555:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
 1d46558:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
 1d4655b:	8b 04 86             	mov    eax,DWORD PTR [esi+eax*4]
 1d4655e:	89 04 8a             	mov    DWORD PTR [edx+ecx*4],eax
 1d46561:	eb db                	jmp    0x1d4653e
 1d46563:	eb 2c                	jmp    0x1d46591
 1d46565:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
 1d4656c:	eb 09                	jmp    0x1d46577
 1d4656e:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
 1d46571:	83 c1 01             	add    ecx,0x1
 1d46574:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
 1d46577:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
 1d4657a:	3b 55 10             	cmp    edx,DWORD PTR [ebp+0x10]
 1d4657d:	7d 12                	jge    0x1d46591
 1d4657f:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
 1d46582:	03 45 fc             	add    eax,DWORD PTR [ebp-0x4]
 1d46585:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
 1d46588:	03 4d fc             	add    ecx,DWORD PTR [ebp-0x4]
 1d4658b:	8a 11                	mov    dl,BYTE PTR [ecx]
 1d4658d:	88 10                	mov    BYTE PTR [eax],dl
 1d4658f:	eb dd                	jmp    0x1d4656e
 1d46591:	5e                   	pop    esi
 1d46592:	8b e5                	mov    esp,ebp
 1d46594:	5d                   	pop    ebp
 1d46595:	c3                   	ret
