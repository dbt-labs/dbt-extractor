# Changelog

## 0.4.0
- Return type changed so that configs are a list of unmerged key-value pairs. Merging config values should now be done by the consumer.

## 0.3.0
- added parallel processing via rayon
- fixed merge logic for tags when multiple config blocks are present in one model file.

## 0.2.0
- Export `ExtractionError` to Python so it can be caught

## 0.1.0
initial release