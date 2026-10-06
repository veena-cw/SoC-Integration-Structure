"""
Logging utilities for tiny-tpu testbenches.
"""

import logging
import sys
from datetime import datetime

# Create logger
logger = logging.getLogger("tiny-tpu")
logger.setLevel(logging.DEBUG)

# Console handler
console_handler = logging.StreamHandler(sys.stdout)
console_handler.setLevel(logging.DEBUG)
console_format = logging.Formatter('%(message)s')
console_handler.setFormatter(console_format)
logger.addHandler(console_handler)

# File handler (optional, for detailed logs)
def enable_file_logging(filename: str = None):
    """Enable logging to file."""
    if filename is None:
        filename = f"tpu_test_{datetime.now().strftime('%Y%m%d_%H%M%S')}.log"

    file_handler = logging.FileHandler(filename)
    file_handler.setLevel(logging.DEBUG)
    file_format = logging.Formatter('%(asctime)s - %(levelname)s - %(message)s')
    file_handler.setFormatter(file_format)
    logger.addHandler(file_handler)
    logger.info(f"Logging to file: {filename}")
